#include "imageFace.h"

ImageFace::ImageFace()
{    
    Mat load_image = imread("img/face_pic_1.jpg");
    load_image.copyTo(image_ROI); 
    
}

ImageFace::ImageFace(int type)
{
   Mat load_image;
   if(type == 1){
    load_image = imread("img/face_pic_1.jpg");
   } else if(type == 2){
    load_image = imread("img/face_pic_2.jpg");
   }
   load_image.copyTo(image_ROI);
}

