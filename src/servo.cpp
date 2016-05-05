#include "servo.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <string.h>

servo::servo(){    
    this->fdw = open("/dev/xillybus_write_8", O_WRONLY);
    
    // TODO throw exception
    if (this->fdw < 0) {
        perror("Failed to open Xillybus device file(s) - Servo");
        exit(1);
    }
    
    // Initial position
    this->position[0] = 0;
    this->position[1] = 0;
    this->position[2] = 0;
    
    // calibration
    a = 1.;
    b = 0.;
    
    this->send_data();
}

void servo::set_position(unsigned char vertical, unsigned char horizontal){
    this->position[0] = vertical;
    this->position[1] = horizontal;
    this->send_data();
}

void servo::set_angle(unsigned char number, float angle){
    this->position[number] = this->a*angle+this->b+0.5;
    this->send_data();
}

servo::~servo(){
    close(this->fdw);
}

void servo::send_data(){
    write(fdw, (void *) this->position, 3);
}

