
#include <CppUTest/TestHarness.h>

extern "C" {
#include "transfer.h"
//#include "mem_map.h"
}



TEST_GROUP(Proj1Test)
{
	void setup()
	{

	}

	void teardown()
	{

	}
};


TEST(Proj1Test, transfer_func){
	
	uint16_t dist;
	
	for(dist = 100; dist <= 600; dist++) {
		uint16_t duty = transfer_func(dist);
		uint32_t duty_calc = ((dist-100)*(PWM_STEPS-1)/500);
		CHECK_EQUAL(duty_calc, duty);
	}
    
}

