#include "manFace.h"
#include <string>
#include <iostream>
#include "opencv2/core/core.hpp"

ManFace::ManFace(){    
    Mat load_image = imread("img/man/normal.png");
    load_image.copyTo(image_ROI);
}

void ManFace::blink(){
    displayAnimation("img/man/blink_normal", 9);
}

void ManFace::smile(){
    displayAnimation("img/man/smile", 4);
}

