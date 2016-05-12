#include "servo.h"

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
    
    if (this->fdw < 0) {
        perror("Failed to open Xillybus device file(s) - Servo");
        exit(1);
    }

    this->position[0] = neutral_position;
    this->position[1] = neutral_position;
    this->position[2] = neutral_position;
    
    this->send_data();
}

void Servo::move_horizontali(signed char delta){
	position[0] += delta;
	send_data();
}

void Servo::move_verticaly(signed char delta){
	position[1] += delta;
	send_data();
}

void Servo::set_position(unsigned char vertical, unsigned char horizontal){
    this->position[0] = vertical;
    this->position[1] = horizontal;
    this->send_data();
}


Servo::~Servo(){
    close(this->fdw);
}

void Servo::send_data(){
    write(fdw, (void *) this->position, 3);
}

