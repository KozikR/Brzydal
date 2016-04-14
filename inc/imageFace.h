#ifndef IMAGEFACE_H
#define IMAGEFACE_H

#include "face.h"

class ImageFace : public Face{
public:
    ImageFace();
    ImageFace(int type);
    void displayImage(string path, int time = 1);
};

#endif
