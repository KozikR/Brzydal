#ifndef HUMANOIDFACE_H
#define HUMANOIDFACE_H

#include "face.h"

class HumanoidFace : public Face{
    public:
        HumanoidFace();
        void init();
        void blink();
        void smile();
        void be_sad();
        void draw_eye();
        void draw_mouth();  
        void animate(int iterations, int time, float top, float bottom, float eye_x, float eye_y);      
                
    protected:
        float eye_left_x;
        float eye_left_y;
        float eye_right_x;
        float eye_right_y;
        float eye_radius;
        
        float mouth_y_top;
        float mouth_y_bottom;

    private:
		bool is_face_happy();
		bool is_face_normal();
		bool is_face_sad();
		void calculate_new_position();
		void calculate_deltas(float mouth_top, int iterations, float mouth_bottom,float eye_x, float eye_y);
		void draw_eye_white();
		void draw_eye_iris();
		void draw_eye_conture();
		void draw_eye_pupil();
		void clear_old_mouth();

		int eye_size;
		int mouth_height;

		float delta_mouth_bottom;
		float delta_mouth_top;
		float delta_eye_x;
		float delta_eye_y;
};

#endif
