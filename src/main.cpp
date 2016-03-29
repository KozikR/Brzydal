#include <iostream>
#include <string>
#include <face.h>
#include <simpleFace.h>
#include <imageFace.h>
#include <unistd.h>
#include <halFace.h>

int main(int argc, char** argv){
    if( argv[1][0] == '1' ){
        SimpleFace face;
        for(int i=0; i<10; i++){
            face.moveEye(0,0);
            face.drawMouth(40);
            face.display(); 
            waitKey(500);

            face.moveEye(10, 10);
            face.drawMouth(0);
            face.display();
            waitKey(500);

            face.moveEye(-10, -10);
            face.drawMouth(-30);
            face.display();
            waitKey(500);
        }
    } 
    else if(argv[1][0] == '2'){  
        ImageFace face1;
        face1.display(); 
    } 
    else if(argv[1][0] == '3'){
        ImageFace face2(2);
        face2.display();
    } 
    else if(argv[1][0] == '4'){
        HalFace halFace;
        for(int phi = 0; phi < 720; phi++){
            float p = -10*phi*3.14/360;
            halFace.draw(p);	
            halFace.display();
            waitKey(50);
        }
    }
    else if(argv[1][0] == '5'){
        HalFace halFace;
        halFace.draw_static();
        halFace.display();
    }

    waitKey(0);
    
    return 0;
}
