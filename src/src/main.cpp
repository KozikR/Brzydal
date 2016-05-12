#include <iostream>
#include <string>
#include <face.h>
#include <simpleFace.h>
#include <imageFace.h>
#include <mechanoidFace.h>
#include <humanoidFace.h>
#include <androidFace.h>
#include <manFace.h>
#include <womanFace.h>
#include <unistd.h>
#include <halFace.h>
#include "servo.h"

void present_face(Face* face, string face_name){
	face.speak("I am going to present " + face_name);
	for(int i=0; i<2; i++)
		face.blink();
	waitKey(1000);
	face.speak("Yes");
	face.move_yes();
	waitKey(1000);
	face.speak("No");
	face.move_no();
	face.smile();
	face.speak("Would you like a cup of coffee?");
	waitKey(5000);
	delete face;
}


int main(int argc, char** argv){
	present_face(new WomanFace, "Woman Face");
	present_face(new ManFace, "Man Face");
	present_face(new MechanoidFace, "Mechanoid Face");
	present_face(new HumanoidFace, "Humanoid Face");
}
