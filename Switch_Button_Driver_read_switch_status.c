#include <stdint.h>
#include "Fmi_Cfg.h" // Ids for <XXX>WriteToSharedObj
#include "ASimSharedObjUtils.h" // <XXX>WriteToSharedObj

// OUT
void read_switch_status(uint8_t* status){
  fmi2Integer data;
  
  fmi2IntegerReadFromWriteBuffer(InputId_Switch_Button_Driver_read_switch_status_status, &data);
  
  *status = (uint8_t) data;
}