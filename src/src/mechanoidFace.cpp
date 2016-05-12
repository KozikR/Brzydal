#include "mechanoidFace.h"
#include <iostream>

MechanoidFace::MechanoidFace()
{    
    Mat pic = Mat::zeros( 480, 800, CV_8UC3 );
        
    int x = pic.cols;
    int y = pic.rows;
    int R = 150;
    int x_0 = 240;
    int y_0 = 600;
    
    for(int row = (x_0-R); row < (x_0+R); ++row){
        //cout<<row<<endl;
        uchar* p = pic.ptr(row);
        for(int col = 0; col < (y); ++col){
     	    *p = 0;	// blue
            p++;
            *p = 255; // green
            p++;
            *p = 0; //red
	        p++;
        }
    }
    
    pic.copyTo(image_ROI);
    
}

