#ifndef FACE_H
#define FACE_H

#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include "servo.h"

using namespace cv;
using namespace std;

class Face{
    public:    
        Face();
        virtual ~Face();
        
        virtual void display();
        
        virtual void move_eye(int left, int right);
        virtual void blink();
        virtual void smile();
        virtual void be_sad();
              
        virtual void speak(string text);        
        virtual void move_head(unsigned char horizontal, unsigned char vertical);
        virtual void move_yes();
        virtual void move_no();

        static const int width;
        static const int height;  
        static const int width_display;
        static const int height_display;
             
    protected:
        Servo servo;
        Mat image;
        Mat image_ROI;  // Region of interest
        static const string windowName;       

private:
	static const int move_time = 20;
};

#endif
