//Library Inclusion

#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Layer Inclusion 


//Self Files Inclusion 

#include "../include/RCC_interface.h"
#include "../include/RCC_private.h"
#include "../include/RCC_config.h"


void RCC_voidEnableClockSource(u8 Copy_u8ClockSource){

if(Copy_u8ClockSource==0){
    
SET_BIT(RCC CR,0);

}
else if(Copy_u8ClockSource==1){

SET_BIT(RCC CR,16);

}
else if(Copy_u8ClockSource==2){

SET_BIT(RCC CR,24);

}
else{
    
//ERROR

}

} 