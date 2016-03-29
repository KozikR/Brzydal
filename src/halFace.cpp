#include "halFace.h"

HalFace::HalFace()
{
    A = 255;
    R = 200;
    r = 12;
    a = 63;
    x0 = 240;
    y0 = 400;
    phi = 0;	
    w = 8*3.14/(3*R);

    //draw(0);
}

void HalFace::draw(float p){
    phi = p;
    for(int row = 0; row < image_ROI.rows; ++row){
        uchar* p = image_ROI.ptr(row);
        for(int col = 0; col < image_ROI.cols; ++col){
     	    *p = 0;	// blue
            p++;
            *p = 0; // green
            p++;
            float r_temp = sqrt(pow(row-x0, 2) + pow(col-y0, 2));
            if(r_temp > R)
                *p = 0;
            else
                *p = A*exp(-r_temp/a)*pow(cos(w*r_temp+phi), 2);
	    p++;
        }
    }
}

void HalFace::draw_static(){  
    float r_temp = 1.1;
    for(int row = 0; row < image_ROI.rows; ++row){
        uchar* px = image_ROI.ptr(row);
        for(int col = 0; col < image_ROI.cols; ++col){
     	    r_temp = sqrt(pow(row-x0, 2) + pow(col-y0, 2));
     	    
     	    // blue
     	    *px = 0; 
            px++;
            
            // green
            if(r_temp <= r){
                *px = (A-50)*cos(5*r_temp*3.14/180);//*pow(cos(w*r+phi), 2);
            }
            else
                *px = 0; 
            px++;
	    
	    //red
            if(r_temp > R)
            {
                *px = 0;
            }
            else if(r_temp <= r){
                *px = (A-50)*cos(2*r_temp*3.14/180);//*pow(cos(w*r+phi), 2);
            }
            else
            {
                *px = A*exp(-r_temp/a);//*pow(cos(w*r+phi), 2);
            }
	        px++;
        }
    }
}


