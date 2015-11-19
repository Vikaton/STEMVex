#pragma config(StandardModel, "RVW CLAWBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
	To complete this challenge, program the robot to make its way through the course, without bumping one of the objects or crossing one of the “walls”. 
	Implement separate functions (move straight forward, turn left, turn right) 
	to account for the behaviors the robot will have to perform
*/

#include "vikaton.h"

task main {
	clearLCDLine(0);
	moveForward(MAX_PORT_NUM, 5000);
	turnX(LEFT, _90DEG);
	moveForward(MAX_PORT_NUM, 1000);
	turnX(LEFT, _90DEG);
	moveForward(MAX_PORT_NUM, 5000);
	turnX(RIGHT, _90DEG);
	moveForward(MAX_PORT_NUM, 1000);
	turnX(RIGHT, _90DEG);
	moveForward(MAX_PORT_NUM, 7000);
	turnX(RIGHT, _90DEG);
	moveForward(MAX_PORT_NUM, 2500);
	turnX(LEFT, _90DEG);
	moveForward(MAX_PORT_NUM, 1000);
	turnX(LEFT, _90DEG);
	moveForward(MAX_PORT_NUM, 3500);
}
