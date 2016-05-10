#ifndef IMAGEFACE_H
#define IMAGEFACE_H

#include "face.h"

class ImageFace : public Face{
public:
    ImageFace();
    void displayImage(string path, int time = 1);
    void displayAnimation(string folder, int length);
};

#endif
