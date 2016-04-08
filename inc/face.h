#ifndef FACE_H
#define FACE_H

#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// neutralne 0-9, pozytywne 10-19, negatywne 20-29
enum Emotions {
    neutral = 0,
    smile = 10,
    happy = 11,
    sad = 20,
    angry = 21
    };

class Face{
    public:    
        Face();
        virtual ~Face();
        
        virtual void display();
        
        virtual void move_eye(int left, int right);
        virtual void blink(int freq);
        
        virtual void express_emotion(Emotions emotion); // animacja wywołująca daną emocję
        
        virtual void speak(string text);
        
        static const int width;
        static const int height;  
        static const int width_display;
        static const int height_display;
             
    protected:
        Mat image;
        Mat image_ROI;  // Region of interest
        static const string windowName;
            
};

#endif
