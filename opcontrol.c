/** @file opcontrol.c
 * @brief File for operator control code
 *
 * This file should contain the user operatorControl() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"
#define PI 3.14159
/*
 * Runs the user operator control code. This function will be started in its own task with the
 * default priority and stack size whenever the robot is enabled via the Field Management System
 * or the VEX Competition Switch in the operator control mode. If the robot is disabled or
 * communications is lost, the operator control task will be stopped by the kernel. Re-enabling
 * the robot will restart the task, not resume it from where it left off.
 *
 * If no VEX Competition Switch or Field Management system is plugged in, the VEX Cortex will
 * run the operator control task. Be warned that this will also occur if the VEX Cortex is
 * tethered directly to a computer via the USB A to A cable without any VEX Joystick attached.
 *
 * Code running in this task can take almost any action, as the VEX Joystick is available and
 * the scheduler is operational. However, proper use of delay() or taskDelayUntil() is highly
 * recommended to give other tasks (including system tasks such as updating LCDs) time to run.
 *
 * This task should never exit; it should end with some kind of infinite loop, even if empty.
 */
void operatorControl() {

// This is a comment
// Sign statements go positive or negative, unsigned statements such as "Unsigned Char" go up to absolute value of their positive and negative values added

// Character - A single character (1 byte) (can only store numbers between -128 and 127)
char c = 'A';
char d = 65;

// Integer - Whole Number (2 bytes) (-50K to 50k)
short foobar=50000;

// Integer - Whole Number (4 bytes) (-4B to 4B)
int foo=7;

// Float - Decimal Number (4 bytes)
float pi = 3.14159;

// Double - Decimal Number (8 bytes) (more precise but harder to process and bigger)
double pie = 3.14159;

// Boolean - a true or false value (1 byte) (-1 to +1)
// True == 1
// False == 0
bool b = true;

// (Conditional Statements) If and else if statements
if(foo == 7) {
	doSomething ();
} else if (foo ==8) {
	doSomethingElse();
} else {
	doSomethingElseElse();
}

// If or Statement
if( foo == 7 || foo == 8) {
	doSomething();
}

// If and Statement
if(foo == 7 && bar ==7){
	doSomething();
}

// If foo is bigger than bar, less than, less than or equal to, bigger than or equal to
if (foo > bar) {

}

if (foo < bar){

}

if(foo <= bar){

}

if( foo >= bar){

}

// (Switch Statements)
switch (foo) {

	case 1: doSomething();
		break;

	case 2: doSomethingElse();
		break;

	case 3: doSomethingElseElse();
			break;

  default: doNothing();
		break;
}

// Loops - Help us so we don't have to repeat code
int foo=7;
//While loop
while(foo > 0){
    doSomething();

		foo = foo - 1; //Can just be written as "foo--" or if we are going up "foo++"

		if (foo == 2) break; //Instead of "break;" we can use "continue;"
		SomeCode();
}

// Do while loop
do {
		doSomething();
} while(foo > 0);

//For loop
for(int bar = 0; foo < 7; bar++) {
	doSomething();

}

// Functions (found in API.h)
//Usually you know something is a function if there is word that is not while,if,else and it is followed by brackets
int add(int a, int b){
		return a + b;
}

float circumference(float dia){
	return PI * dia;
}

float howFar(float wheelDia, float NumRotations){
	return circumference(wheelDia) * numRotations;
}

float howManyRotations(float wheelDia, float distance){
	return distance / circumference(wheelDia);
}

void operatorControl() {
	float foo = howManyRotations(4,12);
}

//Arrays
void operatorControl(){
	int foo[100];
//Arrays start at 0
// So we got... 0-99

	foo[0] = 1;
  foo[1] = 2;
	foo[3] = 3;
// or we could do the above with an array
for(int i=0, i<100; i++)
	foo[i] = i;

//Or we could do the following
int foo[1000]= {[0 ... 999] = 42 };
foo[22];
}






while (1) {
		delay(20);
		motorSet(5, 127);
	}
}
