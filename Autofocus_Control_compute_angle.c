#include <math.h>

#define DISTANCE_MIN 50
#define DISTANCE_MAX 400

#define C1 0.285
#define C0 165.714

// IN  : Distance range = [50, 400]
// OUT : Angle range    = [180, 280]
// Linear function as first approximation
//    y = 0.285x + 165.714

void compute_angle(void){
	uint16_t distance_to_screen = DISTANCE_MIN;
   	float motor_angle = 180;
  	static uint16_t round_motor_angle = 180;
  
  	distance_to_screen = *RTE_Read_screen_distance();
  
  	if(distance_to_screen >= DISTANCE_MIN && distance_to_screen <= DISTANCE_MAX){
    	motor_angle = C1 * distance_to_screen + C0;
      	round_motor_angle = (uint16_t) floor(motor_angle + 0.5f);
  	}
  
 	RTE_Call_set_motor_angle(round_motor_angle);
}
