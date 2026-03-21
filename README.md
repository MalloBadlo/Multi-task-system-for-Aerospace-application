# Multi-task-system-for-Aerospace-application
A FreeRTOS project that consists in a multi-task system that read, log and manage datas from simulated sensors related to the Aerospace field

## How does it work
There are three categories of sensors (based on priority):
	- High priority:
			- Gyroscope sensor
			- Angle of Attack (AoA) sensor
			- Trim sensor

	- Medium priority:
			- Pitot tubes (air speed) sensor  
			- Variometers (vertical speed)
			- Altitude sensor

	- Low priority:
			- Fuel level
			- Engine temperature
			- Gear position