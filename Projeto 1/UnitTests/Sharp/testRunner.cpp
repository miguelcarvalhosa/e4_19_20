
#include <CppUTest/TestHarness.h>

extern "C" {
#include "sharp.h"
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


TEST(Proj1Test, sharp_read){

    sharp_init(0, 1);       // Configuring ADC to use 1 sample
    
    // With RE8 = 0, distance must be 0.
    PORTEbits.RE8 = 0;
    uint16_t distance = sharp_read();
    CHECK_EQUAL(0, distance);
    
    // With RE8 = 1, distance must be calculated accordingly to ADC1BUF0.
    // Equation is d = 127048 / (V + 181)
    // Some values: d = 600mm   V = 31
    //              d = 450mm   V = 101
    //              d = 300mm   V = 244
    //              d = 100mm   V = 1090
    PORTEbits.RE8 = 1;
    uint16_t v;
    for(v=0; v<1024; v++) {
        uint32_t distance_calc = 127048/(v+181);
        ADC1BUF0 = v;
        uint32_t distance = sharp_read();
        CHECK_EQUAL(distance_calc, distance);
    }
    
}

