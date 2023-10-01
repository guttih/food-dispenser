# food-dispenser

A device that automatically feeds a pet according to a 
schedule, set by the pet owner, through a web interface.

I've named the project **Huni food**, so that's the working title for now.

The device is controlled by an ESP32 micro-controller, which provides a web service 
for configuring portion sizes, setting schedules, and reporting the device status.

Inside the device, is a 12 VDC power adapter that powers all of the device's 
motors and sensors. To use the device, mount it on a wall above your pet's bowl and 
plug it into a 230 VAC outlet. Then, use the web interface to configure the portion 
sizes and set the schedule.

Please note that the device is designed for use with dry food only.

## Design and Construction
The development documents and the requirements specification documents can be
found in the `docs` folder. and the first development document to read would be the [development] document.


### Project status Status

**Under construction** 
:construction:

[development]:docs/development.adoc
