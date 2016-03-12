#include face.h
#include <iostream>

const string Face::windowName = "BRZYDAL";
const int Face::width = 800;
const int Face::height = 480;

Face::Face()
:
image(width,hight, CV_8UC3, Scalar(0,0,255));
{
    namedWindow( windowName, WINDOW_AUTOSIZE );  // prepare window
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
