#ifndef _SMARTHOME_H
#define _SMARTHOME_H

typedef struct GpsCoordinate GpsCoordinate;
struct GpsCoordinate {
  float x;
  float y;   
};

typedef enum {
  GARAGE_DOOR,
  KITCHEN_LIGHT,
  AIRCOND,
  WATER_HEATER,
} Device;

typedef enum {
  OFF,
  ON
} State;

GpsCoordinate getGpsCoordinate();
void turn(Device device, State state);

void doSmartThings();
int sqr(float x);


#endif // _SMARTHOME_H
