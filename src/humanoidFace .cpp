#include "humanoidFace.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

HumanoidFace::HumanoidFace()
:
eye_radius(18), eye_left_x(-2), eye_left_y(2), eye_right_x(-2), eye_right_y(2), mouth_y_top(20), mouth_y_bottom(-1), eye_size(90), mouth_height(600)
{    
    rectangle( image, Point( 0, 0 ), Point( 800, 480), Scalar( 153, 255, 255), -1, 4 ); 
}

void HumanoidFace::init(){
    draw_eye();
    draw_mouth();
    display();
}

void HumanoidFace::blink(){

}

void HumanoidFace::smile(){
	animate(100,20,50,20,0,2);
}

void HumanoidFace::be_sad(){
	animate(30,10,0,0,0,-10);
}

void HumanoidFace::animate(int iterations, int time, float mouth_top, float mouth_bottom, float eye_x, float eye_y){
	calculate_deltas(mouth_top, iterations, mouth_bottom, eye_x, eye_y);
    for (int i = 0; i < iterations; i++){
		calculate_new_position();
        draw_eye();
        draw_mouth();
        display();
        waitKey(time);
    }
}

void HumanoidFace::draw_eye(){
	draw_eye_white();
	draw_eye_conture();
	draw_eye_iris();
	draw_eye_pupil();
}

void HumanoidFace::calculate_new_position() {
	mouth_y_bottom += delta_mouth_bottom;
	mouth_y_top += delta_mouth_top;
	eye_left_x += delta_eye_x;
	eye_left_y += delta_eye_y;
	eye_right_x += delta_eye_x;
	eye_right_y += delta_eye_y;
}

void HumanoidFace::calculate_deltas(float next_mouth_top, int iterations, float next_mouth_bottom, float next_eye_x, float next_eye_y) {
	delta_mouth_top = (next_mouth_top - mouth_y_top) / iterations;
	delta_mouth_bottom = (next_mouth_bottom - mouth_y_bottom) / iterations;
	delta_eye_x = (next_eye_x - eye_left_x) / iterations;
	delta_eye_y = (next_eye_y - eye_left_y) / iterations;
}

void HumanoidFace::draw_eye_white() {
	float gray = (eye_size - eye_radius*3)*(eye_size - eye_radius*3)/30;
	int i_max = (eye_size - eye_radius * 3);
	for (int i = 0; i < i_max; i++) {
		Scalar eye_inside_color(255 - (i - i_max) * (i - i_max) / gray, 224 - (i - i_max) * (i - i_max) / gray, 224 - (i - i_max) * (i - i_max) / gray);
		circle(image, Point(275, 355), eye_size - i, eye_inside_color, -1, 4);
		circle(image, Point(275, 125), eye_size - i, eye_inside_color, -1, 4);
	}
}

void HumanoidFace::draw_eye_iris() {
	Point eye_right = Point(275 - eye_right_y, 125 + eye_right_x);
	Point eye_left = Point(275 - eye_left_y, 355 + eye_left_x);
	float blue = (eye_radius * eye_radius) / 12.5;
	int i_max = eye_radius * 2;
	for (int i = 0; i < i_max; i++) {
		Scalar color(255, 178 - (i - i_max) * (i - i_max) / blue / 2,
				102 - (i - i_max) * (i - i_max) / blue);
		circle(image, eye_right, eye_radius * 3 - i, color, -1, 4);
		circle(image, eye_left, eye_radius * 3 - i, color, -1, 4);
	}
}

void HumanoidFace::draw_eye_conture() {
	circle(image, Point(275, 125), eye_size + 1, Scalar(192, 192, 192), 2, 8);
	circle(image, Point(275, 355), eye_size + 1, Scalar(192, 192, 192), 2, 8);
}

void HumanoidFace::draw_eye_pupil() {
	circle(image, Point(275 - 3 * eye_right_y, 125 + 3 * eye_right_x),
			eye_radius, Scalar(0, 0, 0), -1, 8);
	circle(image, Point(275 - 3 * eye_left_y, 355 + 3 * eye_left_x), eye_radius,
			Scalar(0, 0, 0), -1, 8);
}

void HumanoidFace::draw_mouth(){
	clear_old_mouth();

    Size top_size = Size(((mouth_y_top>0)?2*mouth_y_top:(-2*mouth_y_top)), 120);
    Size bottom_size = Size(((mouth_y_bottom>0)?2*mouth_y_bottom:(-2*mouth_y_bottom)), 120);
    int angle_top = (mouth_y_top > 0) ? 180 : 0;
    int angle_bottom = (mouth_y_bottom > 0) ? 180 : 0;
    Scalar colorTop;
    Scalar colorBottom;

    if(is_face_happy() || is_face_sad())
    	colorBottom = Scalar(153, 255, 255);
    else
    	colorBottom = Scalar(0, 0, 255);
    colorTop = Scalar(0, 0, 255);

	ellipse(image, Point(mouth_height, 240), top_size, angle_top, 270, 90, colorTop, -1, 4);
	ellipse(image, Point(mouth_height, 240), bottom_size, angle_bottom, 270, 90, colorBottom, -1, 4);
    
    //border
    ellipse(image, Point(mouth_height,240), top_size, angle_top, 270, 90, Scalar(0,0,0), 2,4);
    ellipse(image, Point(mouth_height,240), bottom_size, angle_bottom, 270, 90, Scalar(0,0,0), 2,4);
}

void HumanoidFace::clear_old_mouth() {
	ellipse(image, Point(mouth_height, 240), Size(110, 130), (180), 270, 90,
			Scalar(153, 255, 255), -1, 4);
	ellipse(image, Point(mouth_height, 240), Size(110, 130), (0), 270, 90,
			Scalar(153, 255, 255), -1, 4);
}

bool HumanoidFace::is_face_happy() {
	return (mouth_y_bottom > 0) && (mouth_y_top > 0);
}

bool HumanoidFace::is_face_sad() {
	return (mouth_y_bottom < 0) && (mouth_y_top < 0);
}

