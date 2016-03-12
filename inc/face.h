#ifndef FACE_H
#define FACE_H

#inlcude <string>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

class Face{
    public:    
        Face();
        virtual ~Face();
        
        virtual void display();
        
        virtual void move_eye(int left, int right);
        virtual void blink(int left, int right);
        
        virtual void speak(string text);
        
        static const int width;
        static const int height;  
    
    protected:
        Mat image;
        static const string windowName;
            
};

#endif
