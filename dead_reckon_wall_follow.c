// Created on Sun Mar 29 2012
//To retrieve polyps and deliver them to the MPA.
#include <stdio.h>
int main() 
{
	//waiting for light to start the program.
	wait_for_light(0);
	shut_down_in(120.0);	
	//making sure the claw and arm are in position.
	set_servo_position(1, 0);//ensures that the arm is in the right position
	sleep(0.6);//0.6 is how many seconds the motors are turning on their input values 
	set_servo_position(0, 624);//ensures that the claw is in the right position
	sleep(0.6);//0.6 is how many seconds the motors are turning on their input values 
	//this section allows the robot to come out of the starting box, turn, drive forward and put itself in position to grab the polyps.
	mav(0, -1000);//-600 is velocity
	mav(2, -975);//-600 is velocity
	sleep(5.0);//7.9 is how many seconds the motors are turning on their input values 
	mav(0, -500);//-500 is velocity
	mav(2, 500);//500 is velocity
	sleep(1.6);//7.9 is how many seconds the motors are turning on their input values
	mav(0, 900);
	mav(2, 900);
	sleep(1.8);	
	mav(2, -800);//-800 is the velocity
	mav(0, -800);//-800 is the velocity
	sleep(2.0);//1.8 is how many seconds the motors are turning on their input values 
	mav(0, -300);//-300 is the velocity
	mav(2, -100);//-100 is the velocity
	sleep(1.9);//1.7 is how many seconds the motors are turning on their input values 
	ao();//turns motors off
	//in this ectionthe arm is lowered the claw closes capturing the polyps and the arm is raised to expose the touch sensor.
	set_servo_position(0, 800);//this lowers the claw
	sleep(0.6);//0.6 is how many seconds it give the servo to spin to the input position 
	set_servo_position(0, 900);
	sleep(1.8);
	set_servo_position(0, 1000);
	sleep(1.6);
	set_servo_position(0, 1300);
	sleep(2.6);
	set_servo_position(0, 1700);//this lowers the claw all the way to the board
	sleep(1.4);//1.4 is how many seconds it give the servo to spin to the input position 
	set_servo_position(1, 2048);//this closes the claws with the polyps inside
	sleep(0.6);//0.6 is how many seconds it give the servo to spin to the input position 
	set_servo_position(0, 1324);//this raises the arm to expose the touch sensors
	sleep(0.6);//0.6 is how many seconds it give the servo to spin to the input position 
	//in this section the robot turns toward MPA and drives straight until the touch sensor is triggered by hitting one of the walls of the MPA.
	mav(0, -100);
	mav(2, -300);
	sleep(2.0);
	mav(0, 1000);
	mav(2, 1000);
	sleep(2.8);
	mav(0, -200);
	mav(2, -200);
	sleep(2.6);
	mav(0, 500);
	mav(2, -500);
	sleep(1.0);
	set_servo_position(0, 1324);
	sleep(0.6);
	while(digital(8)==0)
	{
		mav(2, -900);
		mav(0, -700);
		sleep(0.2);
		if(digital(9)==1)
		{
			mav(2, -700);
			mav(0, -975);
			sleep(0.7);
		}
	}
	mav(0, 300);
	mav(2, 300);
	sleep(1.2);
	ao();
	set_servo_position(0, 1224);
	sleep(0.8);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(0, 1024);
	sleep(0.2);
	set_servo_position(0, 1124);
	sleep(0.2);
	set_servo_position(1, 2048);
	sleep(1.4);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(1, 2048);
	sleep(1.4);
	set_servo_position(0, 524);
	sleep(0.6);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(0, 1424);
	sleep(0.6);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(0, 624);
	sleep(0.6);
	set_servo_position(0, 1424);
	sleep(0.8);
	set_servo_position(0, 624);
	sleep(0.8);
	mav(0, 300);
	mav(2, 0);
	sleep(0.6);
	mav(0, 500);
	mav(2, 500);
	sleep(0.8);
	mav(0, 500);
	mav(2, 500);
	sleep(0.1);
	mav(0, -500);
	mav(2, 500);
	sleep(1.8);
	mav(0, 500);
	mav(2, -500);
	sleep(1.8);
	mav(0, -500);
	mav(2, -500);
	sleep(0.1);
	mav(0, -500);
	mav(2, 500);
	sleep(1.6);
	mav(0, 1000);
	mav(2, 1000);
	sleep(1.0);
	set_servo_position(0, 1324);
	sleep(1.0);
	mav(0, 1000);
	mav(2, 1000);
	sleep(1.8);
	mav(0, -500);
	mav(2, -500);
	sleep(4.6);
	mav(0, -500);
	mav(2, 500);
	sleep(1.7);
	mav(0, -500);
	mav(2, -500);
	sleep(2.0);
	mav(0, -500);
	mav(2, 500);
	sleep(1.6);
	//mav(0, 500);
	//mav(3, 500);
	//sleep(0.8);
	mav(0, 300);
	mav(2, 300);
	sleep(0.2);
	ao();
	set_servo_position(0, 1024);
	sleep(1.4);
	set_servo_position(1, 700);
	sleep(16.0);
	set_servo_position(1, 0);
	set_servo_position(0, 1324);
	sleep(1.4);
	sleep(1.0);
	mav(0, 500);
	mav(2, 500);
	sleep(1.2);
	mav(0, 500);
	mav(2, -500);
	sleep(1.6);
	mav(0, -1000);
	mav(2, -1000);
	sleep(2.3);
	mav(0, 500);
	mav(2, -500);
	sleep(1.4);
		while(digital(8)==0)
	{
		mav(2, -1975);
		mav(0, -2000);
		sleep(0.5);
	}
	mav(0, 500);
	mav(2, -500);
	sleep(1.6);
	mav(2, -1975);
	mav(0, -2000);
	sleep(2.3);
}

