#include "womanFaceMove.h"

#include <iostream>

WomanFaceMove::WomanFaceMove()
{    
    Mat load_image = imread("img/woman/normal.jpg");
    load_image.copyTo(image_ROI);
    Servo s;
}

void WomanFaceMove::blink()
{    
    // function duration: 300ms (23*13+calculations)
    string path;
    string number= "10";
    Mat load_image;
    Mat last_image;
    image_ROI.copyTo(last_image);
    
    int horizontal = 150;
    int vertical = 150;
    int direction = 1;
    int timer = 0;
    
    for(int j=0; j<40; j++){        
        
        for(int i = 1; i<=13; i++){
            sprintf((char*)number.c_str(), "%2d", i);
            path = "img/android/mr"+number+".PNG";
            load_image = imread(path);
            load_image.copyTo(image_ROI);
            display();
            waitKey(23);
            
            timer++;
            if(timer > 5){
                timer = 0;
                horizontal += direction;
                if(horizontal > 160 || horizontal < 140)    direction *= -1;
                s.set_position(vertical, horizontal);
            }
        }
    }
    
    // return to last image
    last_image.copyTo(image_ROI);
    display();
}


