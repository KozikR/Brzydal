#ifndef SERVO_H
#define SERVO_H

class Servo{
public:
    const static int bottom = 1;
    const static int top = 0;
    
    Servo();
    /*
     * Init comunication with servo
     */
     
    void set_position(unsigned char number, unsigned char position);
    /*
     * Set servo position
     */
    
    void set_angle(unsigned char number, float angle);
    /*
     * Set servo position in agles
     */
     
    ~Servo();
    /*
     * Close connections
     */
     
     
private:
    int fdw;
    float a,b;    // calibration    
    unsigned char position[3];
    
    void send_data(void);
};

#endif
