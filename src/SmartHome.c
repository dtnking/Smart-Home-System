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
	if(sqr(sqrt(Gps.x-house.x)+sqrt(Gps.y-house.y))<=2000){
		turn(AIRCOND,ON);
		turn(WATER_HEATER,ON);
	}
	
	else if(sqr(sqrt(Gps.x-outside_GarageDoor.x)+sqrt(Gps.y-outside_GarageDoor.y))<=5){
		turn(GARAGE_DOOR,ON);
	}
	
	else if(sqr(sqrt(Gps.x-kitchen.x)+sqrt(Gps.y-kitchen.y))<=5){
		turn(KITCHEN_LIGHT,ON);
	}
	
}