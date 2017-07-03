#include "smarthome.h"
#include <math.h>
#include "gpscoordinate.h"

GpsCoordinate house ={
	200,
	5345,
};

GpsCoordinate GarageDoor ={
	215,
	5300,
};

GpsCoordinate outside_GarageDoor ={
	220,
	5300,
};

GpsCoordinate kitchen ={
	196,
	5400,
};

int sqr(float x){
	return x*x;
}

void doSmartThings(){
	GpsCoordinate Gps;
	Gps=getGpsCoordinate();
	
	if(sqrt(sqr(Gps.x-kitchen.x)+sqr(Gps.y-kitchen.y))<=2){
		turn(KITCHEN_LIGHT,ON);
	}
	
	else if(sqrt(sqr(Gps.x-outside_GarageDoor.x)+sqr(Gps.y-outside_GarageDoor.y))<=5){
		turn(GARAGE_DOOR,ON);
	}
	
	else if(sqrt(sqr(Gps.x-house.x)+sqr(Gps.y-house.y))<=2000){
		turn(AIRCOND,ON);
		turn(WATER_HEATER,ON);
	}
	
}