#include "Fmi_Cfg.h" // Ids for <XXX>WriteToSharedObj	
#include "ASimSharedObjUtils.h" // <XXX>WriteToSharedObj	
	
// OUT
void read_distance(uint16_t* distance){
  fmi2Integer data;
  	
  fmi2IntegerReadFromWriteBuffer(InputId_Ultrasonic_Sensor_Driver_read_distance_distance, &data);	
  	
  *distance = (uint16_t) data;	
} 