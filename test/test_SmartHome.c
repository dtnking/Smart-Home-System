#include "unity.h"
#include "smarthome.h"
#include "mock_gpscoordinate.h"

GpsCoordinate coordinateWithinHouseArea = {
  199,
  5344,
};

GpsCoordinate coordinateWithinKitchenArea = {
  196,
  5399,
};

GpsCoordinate coordinateWithinGarageDoorArea = {
  221,
  5299,
};

GpsCoordinate coordinateWithinGarageArea = {
  215,
  5300,
};


void setUp(void){}

void tearDown(void){}

void test_smarthome_Turn_Kitchen_light_within_Kitchen_Area(void)
{
	
	getGpsCoordinate_ExpectAndReturn(coordinateWithinKitchenArea);
	turn_Expect(KITCHEN_LIGHT,ON);
	
	doSmartThings();	
}

void test_smarthome_Turn_GarageDoor_ON_within_GarageDoor_Area(void)
{

	getGpsCoordinate_ExpectAndReturn(coordinateWithinGarageDoorArea);
	turn_Expect(GARAGE_DOOR,ON);
	
	doSmartThings();	
}

void test_smarthome_Turn_ON_AIRCOND_WATER_HEATER_within_House_Area(void)
{

	getGpsCoordinate_ExpectAndReturn(coordinateWithinHouseArea);
	turn_Expect(AIRCOND,ON);
	turn_Expect(WATER_HEATER,ON);
	
	doSmartThings();	
}

void test_smarthome_Turn_GarageDoor_OFF_within_Garage_Area(void)
{

	getGpsCoordinate_ExpectAndReturn(coordinateWithinGarageArea);
	turn_Expect(GARAGE_DOOR,OFF);
	
	doSmartThings();	
}
