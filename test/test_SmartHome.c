#include "unity.h"
#include "smarthome.h"
#include "mock_gpscoordinate.h"

GpsCoordinate coordinateWithinHouseArea = {
  199,
  5344,
};

GpsCoordinate coordinateWithinKitchenArea = {
  195,
  5399,
};

GpsCoordinate coordinateWithinGarageDoorArea = {
  221,
  5299,
};

void setUp(void){}

void tearDown(void){}

void test_smarthome_Turn_Kitchen_light_within_Kitchen_Area(void)
{

	getGpsCoordinate_ExpectAndReturn(coordinateWithinKitchenArea);
	turn_Expect(KITCHEN_LIGHT,ON);
	
	doSmartThings();	
}

