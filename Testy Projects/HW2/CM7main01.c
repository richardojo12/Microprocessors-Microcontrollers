//CM7main01.c for scratch build wmh 2020-08-07 : do-nothing main

	#include <stdint.h>

//void initSysTick64MHz();
extern uint64_t SysTick_absmsecs;	//in SysTick64MHz.S
extern uint32_t SysTick_msecs;		// ""
extern uint32_t SysTick_secs;		// ""

void initGPIOxBITn();				//in GreenLED.S
void setGPIOxBITn();				// ""
void resetGPIOxBITn();				// ""

int main() 
{
//	initSysTick64MHz();	//move this to CM7 startup after testing -- done
	initGPIOxBITn();	//""
	
	while(1){ //blink Green LED
		if(SysTick_msecs<500) setGPIOxBITn();
		else resetGPIOxBITn();
	}

	return 0;	//eliminate warning
}
