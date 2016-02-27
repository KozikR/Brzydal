#ifndef SERVO_H
#define SERVO_H

class servo{
public:
    servo();
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
     
    ~servo();
    /*
     * Close connections
     */
     
     
private:
    int fdw;
    float a,b;    // calibration    
    unsigned char position[2];
    
    void send_data(void);
};

#endif
