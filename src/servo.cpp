#include "../inc/servo.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <string.h>

Servo::Servo(){
    this->fdw = open("/dev/xillybus_write_8", O_WRONLY);
    
    // TODO throw exception
    if (this->fdw < 0) {
        perror("Failed to open Xillybus device file(s) - Servo");
        exit(1);
    }
    
    // Initial position
    this->position[0] = 150;
    this->position[1] = 150;
    this->position[2] = 150;
    
    // calibration
    a = 1.;
    b = 0.;
    
    this->send_data();
}

void Servo::set_position(unsigned char number, unsigned char position){
    this->position[number] = position;
    this->send_data();
}

void Servo::set_angle(unsigned char number, float angle){
    this->position[number] = this->a*angle+this->b+0.5;
    this->send_data();
}

Servo::~Servo(){
    close(this->fdw);
}

void Servo::send_data(){
    write(fdw, (void *) this->position, 3);
}

