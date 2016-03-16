#include "imageFace.h"

ImageFace::ImageFace()
{    
    Mat load_image = imread("img/face_pic_1.jpg", CV_LOAD_IMAGE_COLOR);
    load_image.copyTo(image); 
    
}

