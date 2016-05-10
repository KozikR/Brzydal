#include "halFace.h"

HalFace::HalFace()
{
    rectangle( image, Point( 0, 0 ), Point( 800, 480), Scalar( 0, 0, 0), -1, 4 );

    x_0 = 240;
    y_0 = 400;
    R_max = 200;
    iter = 70;
    max_alfa = 3.14/2*5;

    draw(0);
}

void HalFace::draw(float offset){  
    float scale = iter*iter/255;
    float offset_rad = 3.14*offset/180;
    
    for (int i = 0; i<iter;i++){
        float radius = R_max-i*R_max/iter;
        int red = (i*i)/scale*cos(max_alfa - max_alfa*i/iter+offset_rad)*cos(max_alfa - max_alfa*i/iter+offset_rad);
        circle(image, Point(y_0,x_0), radius, Scalar(0,0,red), -1,4);
    }
}

void HalFace::blink(){
    for(int direction=1; direction >= -1; direction -= 2)
        for(int phi = 0; phi < 120; phi++){
            draw(3*direction*phi);
            display();
            waitKey(50);
        }     
}

