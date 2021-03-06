#include "face.h"
#include <iostream>

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
    //image_ROI =   image(Rect(0, 0, height_display, width_display ));
    namedWindow(windowName, WINDOW_NORMAL);  // prepare window
    setWindowProperty(windowName, WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
//  resizeWindow(windowName, Face::width, Face::height);
//  moveWindow(windowName, 20,20);
}

Face::~Face(){
    
}

void Face::display(){
    imshow( windowName, image );
}

void Face::move_eye(int left, int right){
    
}

void Face::blink(int freq){
    
}

void Face::speak(string text){
    
}

void Face::express_emotion(Emotions emotion){
    
}
