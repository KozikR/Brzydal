#include "imageFace.h"

ImageFace::ImageFace()
{    
    Mat load_image = imread("img/face_pic_1.jpg", CV_LOAD_IMAGE_COLOR);
    load_image.copyTo(image_ROI); 
    
}

ImageFace::ImageFace(int type)
{
   Mat load_image;
   if(type == 1){
    load_image = imread("img/face_pic_1.jpg", CV_LOAD_IMAGE_COLOR);
   } else if(type == 2){
    load_image = imread("img/face_pic_2.jpg", CV_LOAD_IMAGE_COLOR);
   }
   load_image.copyTo(image_ROI);
}

