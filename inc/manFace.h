#ifndef MANFACE_H
#define MANFACE_H

#include "face.h"

// twarz androida - zdjecia
class ManFace : public Face{
public:
    ManFace();
    void blink(int freq = 1);
};

#endif
