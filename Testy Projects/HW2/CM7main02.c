//CM7main02.c for scratch build wmh 2020-09-07 : do-nothing main

	#include <stdint.h>

//void initSysTick64MHz();
extern uint64_t SysTick_absmsecs;	//in SysTick64MHz.S
extern uint32_t SysTick_msecs;		// ""
extern uint32_t SysTick_secs;		// ""

void initGPIOxBITn();				//in GreenLED.S
void setGPIOxBITn();				// ""
void resetGPIOxBITn();				// ""

//definitions in myDataOps.S
uint32_t *DwordAddress(void);				//returns pointer to variable 'Dword' defined in myDataOps.S
uint32_t getDwordContents(void);			//returns value stored in variable 'Dword' defined in myDataOps.S
void addToDwordContents(int32_t addend);	//adds value 'addend' to value stored in variable 'Dword' defined in myDataOps.S


int main() 
{
	uint32_t worddata,*pworddata;			//C values we can watch in main()
	
	pworddata=DwordAddress();				//demo call to myDataOps.S
	worddata=getDwordContents();			// ""
	addToDwordContents(0xFFFFFFFF);			// ""

	initGPIOxBITn();	//""

	while(1){ //blink Green LED
		if(SysTick_msecs<500) setGPIOxBITn();
		else resetGPIOxBITn();
	}

	return 0;	//eliminate warning
}
