#include "womanFace.h"
#include <iostream>

WomanFace::WomanFace()
{    
	displayImage("img/woman/normal.png", 1000);
}

void WomanFace::blink(){
    displayAnimation("img/woman/blink_smile", 5);
}

void WomanFace::smile(){
    displayAnimation("img/woman/smile", 4);
}
