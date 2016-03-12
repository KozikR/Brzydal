#include <iostream>
#include <string>
#include <face.h>
#include <simpleFace.h>
#include <unistd.h>

int main(int argc, char** argv){
    
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
    waitKey(0);
    
    return 0;
}
