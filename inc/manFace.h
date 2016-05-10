#ifndef MANFACE_H
#define MANFACE_H

#include "imageFace.h"

class ManFace : public ImageFace{
public:
    ManFace();
    void blink();
    void smile();
};

#endif
