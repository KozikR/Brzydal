#ifndef HUMANOIDFACE_H
#define HUMANOIDFACE_H

#include "face.h"

// twarz humanoidalna - rysunki
class HumanoidFace : public Face{
    public:
        HumanoidFace();
        void draw_eye();
        void draw_mouth();  
        void animate(int iterations, int time, float top, float bottom, float eye_x, float eye_y);      
                
    protected:
        float eye_l_x;    //lewe oko, offet x
        float eye_l_y;
        float eye_r_x;
        float eye_r_y;    //max eye_radius
        float eye_radius; //max 15
        
        float mouth_y_t; // zewnetrzna krawędź +- 50, mouth_y_t>mouth_y_b (zawsze!)
        float mouth_y_b; // wewnętrzna krawędż     

};

#endif
