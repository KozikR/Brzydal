#include "halFace.h"

HalFace::HalFace()
{
    rectangle( image, Point( 0, 0 ), Point( 800, 480), Scalar( 0, 0, 0), -1, 4 );
    A = 255;
    R = 200;
    r = 12;
    a = 63;
    x0 = 240;
    y0 = 400;
    phi = 0;	
    w = 8*3.14/(3*R);

    x_0 = 240;
    y_0 = 400;
    R_max = 200;
    iter = 70;
    max_alfa = 3.14/2*5; //pi/2 *(2k+1)

    draw(0);
}

void HalFace::draw(float offset){
    /*
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
    */
    
    float scale = iter*iter/255;
    float offset_rad = 3.14*offset/180;
    
    for (int i = 0; i<iter;i++){
        circle(image, Point(y_0,x_0), R_max-i*R_max/iter, Scalar(0,0,(i*i)/scale*cos(max_alfa - max_alfa*i/iter+offset_rad)*cos(max_alfa - max_alfa*i/iter+offset_rad)), -1,4); //255,0,0 -> 0,0,0
        //cout<<(i*i)/scale*cos(max_alfa - max_alfa*i/iter)*cos(max_alfa - max_alfa*i/iter)<<endl;
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


