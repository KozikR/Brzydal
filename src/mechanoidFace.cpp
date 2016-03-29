#include "mechanoidFace.h"

MechanoidFace::MechanoidFace()
{    
    Mat load_image = imread("img/face_pic_1.jpg");
    load_image.copyTo(image_ROI); 
    
}

