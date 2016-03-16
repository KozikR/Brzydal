#ifndef HALFACE_H
#define HALFACE_H

#include "face.h"

class HalFace : public Face{
public:
    HalFace();
    
    void draw(float p);

protected:
   float A;
   float R;
   float a;
   float x0;
   float y0;
	
   float w;
   float phi;
};

#endif
