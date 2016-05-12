#include "androidFace.h"
#include <string>
#include <iostream>

AndroidFace::AndroidFace()
{    
    Mat load_image = imread("img/android/smile.PNG");
    load_image.copyTo(image_ROI);
}

void AndroidFace::blink(int freq)
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
