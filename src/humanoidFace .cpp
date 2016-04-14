#include "humanoidFace.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

HumanoidFace::HumanoidFace()
{    
    rectangle( image, Point( 0, 0 ), Point( 800, 480), Scalar( 153, 255, 255), -1, 4 );
    eye_radius = 18;
    eye_l_x = -2;
    eye_l_y = 2;
    eye_r_x = -2;
    eye_r_y = 2;   
    draw_eye();
    
    
    //neutral
    mouth_y_t = 20;
    mouth_y_b = -1;

/*  
    //smile
    mouth_y_t = 50;
    mouth_y_b = 30;
    
    //sad
    mouth_y_t = -50;
    mouth_y_b = -20;    
    
    //wonder
    mouth_y_t = 30;
    mouth_y_b = -30;     

    //nope
    mouth_y_t = 0;
    mouth_y_b = 0; 
*/    
    draw_mouth();

}

void HumanoidFace:: animate(int iterations, int time, float top, float bottom, float eye_x, float eye_y){
// iterations - ile klatek
// time - czas w ms
// top - pozycja zewnętrznej wargi
// bottom - pozycja wewnętrznej
// funkcja trwa iterations*time ms 

    float t = (top-mouth_y_t); //ile należy się przesunąć
    float b = (bottom-mouth_y_b);
    float mnt = t/iterations;
    float mnb = b/iterations;
    float x = (eye_x-eye_l_x); //ile należy się przesunąć
    float y = (eye_y-eye_l_y);
    float mnx = x/iterations;
    float mny = y/iterations;
    for (int i = 0; i<iterations;i++){
        mouth_y_b += mnb; 
        mouth_y_t += mnt;
        eye_l_x += mnx;
        eye_l_y += mny;
        eye_r_x += mnx;
        eye_r_y += mny;   
        draw_eye();        
        draw_mouth();
        display();
        waitKey(time); 
    }  
}

void HumanoidFace:: draw_eye(){

    Point right = Point(275-eye_r_y, 125+eye_r_x);
    Point left  = Point(275-eye_l_y, 355+eye_l_x);
    int wielkosc_oka = 90;
    float szarosc = (wielkosc_oka - eye_radius*3)*(wielkosc_oka - eye_radius*3)/30;
    float niebieski = (eye_radius*eye_radius)/12.5;
    int i_max = (wielkosc_oka - eye_radius*3);
    
    //bialka oczu
    //circle(image, Point(275, 125), 50, Scalar(255,255,255), -1);
    //circle(image, Point(275, 355), 50, Scalar(255,255,255), -1);
    for (int i = 0; i<(wielkosc_oka - eye_radius*3);i++){
        circle(image, Point(275, 355), wielkosc_oka-i, Scalar(255-(i-i_max)*(i-i_max)/szarosc,224-(i-i_max)*(i-i_max)/szarosc,224-(i-i_max)*(i-i_max)/szarosc), -1,4); //224,224,224 -> 255,255,255
        circle(image, Point(275, 125), wielkosc_oka-i, Scalar(255-(i-i_max)*(i-i_max)/szarosc,224-(i-i_max)*(i-i_max)/szarosc,224-(i-i_max)*(i-i_max)/szarosc), -1,4); //BGR
    }
    
    //ramka bialek oczu
    circle(image, Point(275, 125), wielkosc_oka+1, Scalar(192,192,192), 2,8);
    circle(image, Point(275, 355), wielkosc_oka+1, Scalar(192,192,192), 2,8);

    i_max = eye_radius*2;
    //teczowka
    //circle(image, Point(275-eye_r_y, 125+eye_r_x), eye_radius*3, Scalar(255,153,51), -1); //51,153,255
    //circle(image, Point(275-eye_l_y, 355+eye_l_x), eye_radius*3, Scalar(255,153,51), -1); //BGR   
    for (int i = 0; i<2*eye_radius;i++){
        circle(image, Point(275-eye_r_y, 125+eye_r_x), eye_radius*3-i, Scalar(255,178-(i-i_max)*(i-i_max)/niebieski/2,102-(i-i_max)*(i-i_max)/niebieski), -1,4); //255,153,51 -> 255,178,102
        circle(image, Point(275-eye_l_y, 355+eye_l_x), eye_radius*3-i, Scalar(255,178-(i-i_max)*(i-i_max)/niebieski/2,102-(i-i_max)*(i-i_max)/niebieski), -1,4); //BGR
    }
    
    // źrenica
    circle(image, Point(275-3*eye_r_y, 125+3*eye_r_x), eye_radius, Scalar(0,0,0), -1,8);
    circle(image, Point(275-3*eye_l_y, 355+3*eye_l_x), eye_radius, Scalar(0,0,0), -1,8);
}



void HumanoidFace:: draw_mouth(){
    int mouth_height = 600;

    //czyszczenie powierzchni
    ellipse(image, Point(mouth_height,240), Size(110, 130), (180), 270, 90, Scalar(153, 255, 255), -1,4);
    ellipse(image, Point(mouth_height,240), Size(110, 130), (0), 270, 90, Scalar(153, 255, 255), -1,4);

    //wypełnienie
    if((mouth_y_b>0)&&(mouth_y_t>0)){ //uśmiech
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_t>0)?2*mouth_y_t:(-2*mouth_y_t)), 120), ((mouth_y_t>0)?180:0), 270, 90, Scalar(0,0,255), -1,4); //t
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_b>0)?2*mouth_y_b:(-2*mouth_y_b)), 120), ((mouth_y_b>0)?180:0), 270, 90, Scalar(153, 255, 255), -1,4); //b
        //ellipse(image, Point(mouth_height,240), Size(((-mouth_y_b>0)?2*-mouth_y_b:(2*mouth_y_b)), 120), ((-mouth_y_b>0)?180:0), 270, 90, Scalar(153, 255, 255), -1,4); //b        
    }
    
    if((mouth_y_b<0)&&(mouth_y_t>0)){ //obie
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_t>0)?2*mouth_y_t:(-2*mouth_y_t)), 120), ((mouth_y_t>0)?180:0), 270, 90, Scalar(0,0,255), -1,4); //t
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_b>0)?2*mouth_y_b:(-2*mouth_y_b)), 120), ((mouth_y_b>0)?180:0), 270, 90, Scalar(0, 0, 255), -1,4); //b 
    }   
    
    if((mouth_y_b<0)&&(mouth_y_t<0)){ //smutek
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_t>0)?2*mouth_y_t:(-2*mouth_y_t)), 120), ((mouth_y_t>0)?180:0), 270, 90, Scalar(0,0,255), -1,4); //t
        ellipse(image, Point(mouth_height,240), Size(((mouth_y_b>0)?2*mouth_y_b:(-2*mouth_y_b)), 120), ((mouth_y_b>0)?180:0), 270, 90, Scalar(153, 255, 255), -1,4); //b
        //ellipse(image, Point(mouth_height,240), Size(((-mouth_y_b>0)?-2*mouth_y_b:(2*mouth_y_b)), 120), ((-mouth_y_b>0)?180:0), 270, 90, Scalar(153, 255, 255), -1,4); //b        
    }
    
    //krawedzie
    ellipse(image, Point(mouth_height,240), Size(((mouth_y_t>0)?2*mouth_y_t:(-2*mouth_y_t)), 120), ((mouth_y_t>0)?180:0), 270, 90, Scalar(0,0,0), 2,4); //górna warga
    //ellipse(image, Point(mouth_height,240), Size((((mouth_y_t+mouth_y_b)>0)?2*(mouth_y_t+mouth_y_b):(-2*(mouth_y_t+mouth_y_b))), 120), ((mouth_y_t+mouth_y_b>0)?180:0), 280, 100, Scalar(0,0,0), 1,4); //środek
    ellipse(image, Point(mouth_height,240), Size(((mouth_y_b>0)?2*mouth_y_b:(-2*mouth_y_b)), 120), ((mouth_y_b>0)?180:0), 270, 90, Scalar(0,0,0), 2,4); //dolna warga
    
}

