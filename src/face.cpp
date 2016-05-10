#include "face.h"
#include <iostream>
#include <stdio.h>

const string Face::windowName = "BRZYDAL";
const int Face::width = 768;//480;
const int Face::height = 1024;//800;
const int Face::width_display = 480;
const int Face::height_display = 800;
        
Face::Face()
:
image(Face::width, Face::height, CV_8UC3, Scalar(255,0,0)),
image_ROI(image, Rect(0, 0, height_display, width_display ))
{
    namedWindow(windowName, WINDOW_NORMAL);  // prepare window
    setWindowProperty(windowName, WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
}

Face::~Face(){
    
}

void Face::display(){
    imshow( windowName, image);
}

void Face::move_eye(int left, int right){
    
}

void Face::blink(){
    
}

void Face::smile(){

}

void Face::be_sad(){

}

void Face::speak(string text){
	string command = "espeak -v en i\"" + text + "\" --stdout|paplay";
    system(command.c_str());
}

void Face::move_head(unsigned char horizontal, unsigned char vertical){
    servo.set_position(vertical,   horizontal);
}

void Face::move_yes(){
	servo.set_position(servo.neutral_position, servo.neutral_position);
	for(int i=0; i<10; i++){
		servo.move_verticaly(1);
		waitKey (move_time);
	}
	for (int i = 0; i < 20; i++) {
		servo.move_verticaly(-1);
		waitKey (move_time);
	}
	for(int i=0; i<10; i++){
		servo.move_verticaly(1);
		waitKey (move_time);
	}
	servo.set_position(servo.neutral_position, servo.neutral_position);
}

void Face::move_no(){
	servo.set_position(servo.neutral_position, servo.neutral_position);
	for(int i=0; i<10; i++){
		servo.move_horizontali(1);
		waitKey (move_time);
	}
	for (int i = 0; i < 20; i++) {
		servo.move_horizontali(-1);
		waitKey (move_time);
	}
	for(int i=0; i<10; i++){
			servo.move_horizontali(1);
		waitKey (move_time);
	}
	servo.set_position(servo.neutral_position, servo.neutral_position);
}
