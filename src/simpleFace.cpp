#include "simpleFace.h"

SimpleFace::SimpleFace()
:
mouth_position(40)
{    
    circle(image, Point(350, 240), 200, Scalar(0,0,0), 5);
    circle(image, Point(350, 240), 200, Scalar(0,255,255), -1);

    circle(image, Point(300, 160), 20, Scalar(0,0,0), 5);  
    circle(image, Point(300, 320), 20, Scalar(0,0,0), 5);
    moveEye(0, 0);

    drawMouth(mouth_position);    
}

void SimpleFace::moveEye(int left, int right){
    circle(image, Point(300, 160), 20, Scalar(255,255,255), -2);
    circle(image, Point(305, 160+left), 10, Scalar(0,0,0), -2);
 
    circle(image, Point(300, 320), 20, Scalar(255,255,255), -2);
    circle(image, Point(305, 320+right), 10, Scalar(0,0,0), -2);
}

void SimpleFace::drawMouth(int move){
    ellipse(image, Point(400,240), Size(((mouth_position>0)?mouth_position:(-mouth_position)), 90), ((mouth_position>0)?180:0), 270, 90, Scalar(0,255,255), 5);
    mouth_position = move;
    ellipse(image, Point(400,240), Size(((mouth_position>0)?mouth_position:(-mouth_position)), 90), ((mouth_position>0)?180:0), 270, 90, Scalar(0,0,255), 5);
}
