#ifndef HALFACE_H
#define HALFACE_H

#include "face.h"

class HalFace : public Face{
public:
    HalFace();
    void blink();
    
    void draw(float p);
    void draw_static();

protected:
    int x_0;
    int y_0;
    int R_max;
    int iter;
    float max_alfa; //pi/2 *(2k+1)	
};

#endif
