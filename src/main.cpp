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


int main(int argc, char** argv){
	{
		WomanFace womanFace;
		womanFace.blink();
		womanFace.move_yes();
		womanFace.smile();
		womanFace.smile();
		womanFace.speak("Hello my name is Bhshidall. I am social robot");
	}
	{
		ManFace manFace;
		manFace.blink();
		manFace.smile();
	}
}
