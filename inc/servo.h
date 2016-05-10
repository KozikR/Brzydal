#ifndef SERVO_H
#define SERVO_H

class Servo{
public:
    const static int horizontal = 1;
    const static int vertical = 0;
    const static unsigned char neutral_position = 150;
    
    Servo();
    ~Servo();
     
    void set_position(unsigned char number, unsigned char position);
    void move_horizontali(signed char delta);
    void move_verticaly(signed char delta);
     
private:
    int fdw;
    float a,b;    // calibration    
    unsigned char position[3];
    
    void send_data(void);
};

#endif
