#ifndef ANDROIDFACE_H
#define ANDROIDFACE_H

#include "face.h"

// twarz androida - zdjecia
class AndroidFace : public Face{
public:
    AndroidFace();
    void blink(int freq = 1);
};

#endif
