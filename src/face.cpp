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

    circle(image, Point(50, 50), 20, Scalar(0,0,255));
    circle(image, Point(750, 50), 20, Scalar(0,255,0));
    circle(image, Point(50, 430), 20, Scalar(0,255,255));
    circle(image, Point(750, 430), 20, Scalar(255,0,255));

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
