#ifndef WOMANFACE_H
#define WOMANFACE_H

#include "face.h"

// twarz zdjecia
class WomanFace : public Face{
public:
    WomanFace();
    void blink(int freq = 1);
};

#endif
