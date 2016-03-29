#ifndef HALFACE_H
#define HALFACE_H

#include "face.h"

class HalFace : public Face{
public:
    HalFace();
    
    void draw(float p);
    void draw_static();

protected:
    float A;	
    float R; // promień zewnętrzny
    float r; // promień wewnętrzny
    float a;
    float x0;
    float y0;
	
    float w;
    float phi;
};

#endif
