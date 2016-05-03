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
    if (string[0] == 'm' )   //mechanoid - pilka
        return 8;                    
    if (string[0] == 'q' )   //ankieta
        return 9;              
    return 0;    
}


int main(int argc, char** argv){

    int mapowanie;
    // jeśli wywołasz bez parametru
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
            waitKey(500);
            human.animate(100,20,50,20,-5,10);  //smile
            waitKey(500);
            human.animate(100,20,30,-30,-5,10);  //zaskoczenie
            waitKey(500);
            human.animate(100,20,0,0,-5,10);  //hmm
            break;
            }  
        case 8:{    //mechanoid
            MechanoidFace mech;
            mech.display();
            break;
            }                       
        case 9:{    
            /** ankieta
            1. android man
            2. android woman
            3. humanoid
            4. mechanoid
            5. animal-like structure
            
            neutral - 5 sek (+blink - optional)
            smile - animation + 5 sek (blink optional)
            sum ~ 15 s
            
            **/
            int wait_number = 3000;
                       
            ImageFace form; // form face class
            string path = "img/man/normal.png";
            string number= "10";  
            srand( time( NULL ) ); // RAND_MAX = 2147483647 -> aby max = 1000 uzyj int(rand()/2147483.647)
            
            // man face  
            form.displayImage((string)("img/1.png"),wait_number);          
            //normal blink x3
            for (int j = 0;j<3;j++){
                form.displayImage((string)("img/man/normal.png"),2000+ 2*int(rand()/2147483.647));
                for(int i = 0; i<=8; i++){
                    sprintf((char*)number.c_str(), "%2d", i);
                    path = "img/man/blink_normal"+number+".png";
                    form.displayImage(path,50);
                    }
                }
            waitKey(2000);
            //smile
            for(int i = 0; i<=3; i++){
                sprintf((char*)number.c_str(), "%2d", i);
                path = "img/man/smile"+number+".png";
                form.displayImage(path,50);
                }                
            waitKey(3000);
 
            //woman face 
            form.displayImage((string)("img/2.png"),wait_number);
            //normal
            form.displayImage((string)("img/woman/normal.png"),3000);
            //smile  blink x3
            for(int i = 0; i<=3; i++){
                sprintf((char*)number.c_str(), "%2d", i);
                path = "img/woman/smile"+number+".png";
                form.displayImage(path,50);
                } 
            for (int j = 0;j<3;j++){
                form.displayImage((string)("img/woman/smile 3.png"),2000+ 2*int(rand()/2147483.647));
                for(int i = 0; i<=4; i++){
                    sprintf((char*)number.c_str(), "%2d", i);
                    path = "img/woman/blink_smile"+number+".png";
                    form.displayImage(path,50);
                    }
                }                               
            waitKey(2000);
            
            //humanoid
            form.displayImage((string)("img/3.png"),wait_number);
            HumanoidFace human;
            human.display();
            waitKey(3000);
            human.animate(30,10,0,0,0,-10);  //sad
            waitKey(3000);
            human.animate(100,20,50,20,0,2);  //smile
            waitKey(4000);
            
            // mechanoid
            form.displayImage((string)("img/4.png"),wait_number);
            HalFace halFace;
            halFace.display();
            waitKey(3000);
            for(int phi = 0; phi < 120; phi++){
                halFace.draw(3*phi);	
                halFace.display();
                waitKey(50);
            }     
            for(int phi = 0; phi < 120; phi++){
                halFace.draw(-3*phi);	
                halFace.display();
                waitKey(50);
            }     
            waitKey(3000);            
            break;
            //form.displayImage((string)("img/5.png"),wait_number);     
            // ???
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
