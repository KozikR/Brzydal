#include <iostream>
#include <string>
#include <face.h>
#include <simpleFace.h>
#include <imageFace.h>
#include <humanoidFace.h>
#include <androidFace.h>
#include <unistd.h>
#include <halFace.h>
#include <servo.h>

//#define RAND_MAX (1000) //+-0.5 sekundy

int map(char * string){
    if (string[0]=='1')     //buzka
        return 1;
    if (string[0]=='2')     //face 1
        return 2;
    if (string[0]=='3')     //face 2
        return 3;        
    if (string[0]=='4')     //hal moving
        return 4;
    if (string[0]=='5')     // hal static
        return 5;
    if (string[0] == 'a' )   //michal
        return 6;                    
    if (string[0] == 'h' )   //humanoid - upgrade buzki
        return 7;            
    return 0;    
}


int main(int argc, char** argv){
    Servo servo;	

    int mapowanie;
    // if run without parameter
    if (!argv[1]){ 
        mapowanie = 2;
    }
    else{
        mapowanie = map(argv[1]);
    }
        
    switch(mapowanie){
        case 1:{    //buzka
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
            break;
        }
        case 2:{    //face 1
            ImageFace face1;
            face1.display();             
            break;
        }
        case 3:{    //face 2
            ImageFace face2;
            face2.display();             
            break;
        }      
        case 4:{    //hal moving
            HalFace halFace;
            halFace.display();
            waitKey(500);
            for(int phi = 0; phi < 120; phi++){
                halFace.draw(3*phi);	
                halFace.display();
                waitKey(50);
            }     
            break;
        }    
        case 5:{    //hal static
            HalFace halFace;
            halFace.draw_static();
            halFace.display();        
            break;
        }      
        case 6:{    //michal
            AndroidFace michal;
            michal.display();
            srand( time( NULL ) ); // RAND_MAX = 2147483647 -> aby max = 1000 uzyj int(rand()/2147483.647)
            
            for (int i = 1; i<100;i++){
            //cout<<int(rand()/2147483.647)<<endl; //Debug
            waitKey(2000+ 2*int(rand()/2147483.647)); // co 3+-1s
            michal.blink();
            }
            break; 
        }             
        case 7:{    //humanoid
            HumanoidFace human;
            human.display();
            for(int i=0; i<5; i++){
	    	servo.set_position(servo.bottom, 100);
            	waitKey(500);
            	human.animate(30,20,50,20);  //smile
	    	servo.set_position(servo.bottom, 150);
            	waitKey(500);
            	human.animate(30,20,30,-30);  //zaskoczenie
	    	servo.set_position(servo.bottom, 50);
            	waitKey(500);
            	human.animate(30,20,0,0);  //hmm
	    }
            break;
            }           
        default:{
            ImageFace face2;
            face2.display();    
            break;
        }
    } // koniec switcha
    
    waitKey(0);
    
    return 0;
}
