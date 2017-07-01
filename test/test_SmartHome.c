#include "unity.h"
#include "smarthome.h"
#include "mock_smarthome.h"
#include "mock_smarthome.c"

void setUp(void){}

void tearDown(void){}

void test_smarthome_Turn_Kitchen_light_when_less_than2(void)
{
	int x;
	GpsCoordinate gps;
	gps.x=196;
	gps.y=5400;
	
	getGpsCoordinate_ExpectAndReturn(gps);
	turn_Expect(KITCHEN_LIGHT, ON);
	
	doSmartThings();	
}

