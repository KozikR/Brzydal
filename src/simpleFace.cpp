#include "simpleFace.h"

SimpleFace::SimpleFace(){    
    circle(image, Point(350, 240), 200, Scalar(255,255,255), 5);
    
    circle(image, Point(300, 190), 20, Scalar(255,255,255), 2);
    circle(image, Point(300, 390), 20, Scalar(255,255,255), 2);
}
