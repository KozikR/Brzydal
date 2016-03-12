#ifndef SIMPLEFACE_H
#define SIMPLEFACE_H

#include "face.h"

class SimpleFace : public Face{
public:
    SimpleFace();
    
    void moveEye(int left, int right);

    void drawMouth(int move);
protected:
    int mouth_position;
};

#endif
