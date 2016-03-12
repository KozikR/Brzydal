#include "face.h"
#include <iostream>

const string Face::windowName = "BRZYDAL";
const int Face::width = 480;
const int Face::height = 800;

Face::Face()
:
image(Face::width, Face::height, CV_8UC3, Scalar(255,0,0))
{
    namedWindow(windowName, WINDOW_AUTOSIZE);  // prepare window
 //   setWindowProperty(windowName, WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
    resizeWindow(windowName, Face::width, Face::height);
    moveWindow(windowName, 20,20);
}

Face::~Face(){
    
}

void Face::display(){
    imshow( windowName, image );
}

void Face::move_eye(int left, int right){
    
}

void Face::blink(int left, int right){
    
}

void Face::speak(string text){
    
}
