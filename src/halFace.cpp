#include "halFace.h"

HalFace::HalFace()
{
   A = 255;
   R = 200;
   a = 63;
   x0 = 240;
   y0 = 400;
   phi = 0;	
   w = 8*3.14/(3*R);

   draw(0);
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
        float r = sqrt(pow(row-x0, 2) + pow(col-y0, 2));
        if(r > R)
           *p = 0;
        else
           *p = A*exp(-r/a)*pow(cos(w*r+phi), 2);
	p++;
     }
   }
}

