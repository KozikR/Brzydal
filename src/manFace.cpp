#include "manFace.h"
#include <string>
#include <iostream>
#include "opencv2/core/core.hpp"

ManFace::ManFace()
{    
    Mat load_image = imread("img/man/normal.png");
//    load_image.copyTo(image.rowRange(0, 480).colRange(0, 803));
    load_image.copyTo(image_ROI);
}

void ManFace::blink(int freq)
{    
    // funkcja trwa 300ms (23*13+obliczenia)
    string path;
    string numer= "10";
    Mat load_image;
    Mat last_image;
    image_ROI.copyTo(last_image);
    
    for(int i = 1; i<=13; i++){
        sprintf((char*)numer.c_str(), "%2d", i);
        path = "img/android/mr"+numer+".PNG";
        load_image = imread(path);
        load_image.copyTo(image_ROI);
        display();
        waitKey(23);
    }
    
    // return to last image
    last_image.copyTo(image_ROI);
    display();
}
