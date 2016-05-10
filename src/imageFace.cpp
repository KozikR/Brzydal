#include "imageFace.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

ImageFace::ImageFace()
{    
    Mat load_image = imread("img/face_pic_1.jpg");
    load_image.copyTo(image_ROI); 
    
}

void ImageFace::displayImage(string path, int time)
{
   Mat load_image;
   load_image = imread(path);
   load_image.copyTo(image_ROI);
   display();
   std::cout << path << "\n";
   waitKey(time);
}

void ImageFace::displayAnimation(string folder, int length){
    Mat load_image;
    Mat last_image;
    image_ROI.copyTo(last_image);
    
    for(int i = 0; i < length; i++){
        std::ostringstream path;
        path << folder << std::setfill(' ') << std::setw(2) << i << ".png";
        displayImage(path.str(), 500);
    }
    last_image.copyTo(image_ROI);
    display();
}
