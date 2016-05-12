#ifndef WOMANFACEMOVE_H
#define WOMANFACEMOVE_H

#include "face.h"
#include "servo.h"

class WomanFaceMove : public Face{
    Servo s;
public:
    WomanFaceMove();
    void blink();
};

#endif
