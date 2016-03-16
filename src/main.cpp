#include <iostream>
#include <string>
#include <face.h>
#include <simpleFace.h>
#include <imageFace.h>
#include <unistd.h>

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
} else if(argv[1][0] == '2'){ 
   
  ImageFace face1;
  face1.display(); 
	
} else if(argv[1][0] = '3'){
  ImageFace face2(2);
  face2.display();
}

    waitKey(0);
    
    return 0;
}
