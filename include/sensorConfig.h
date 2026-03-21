#ifndef __CONFIG__
#define __CONFIG__

#include "FreeRTOS.h"
#include "task.h"

typedef enum 
{
	GYROSCOPE;
	AoA;
	TRIM;
	PITOT_TUBES;
	VARIOMETERS;
	ALTITUDE;
	FUEL_LEVEL;
	ENGINE_TEMPERATURE;
	GEAR_POSITION;

}SensorType_t;


typedef struct 
{
	const char 				*pcTaskName;
	TaskFunction_t 			 pxTaskJob;
	void 					*pvParameters;
	configSTACK_DEPTH_TYPE	 usStackSize;
	UBaseType_t				 uxPriority;
	SensorType_t			 xType;
	uint32_t				 ulPeriod;
	uint32_t 				 ulDeadline;

}SensorParameters_t;


#endif
