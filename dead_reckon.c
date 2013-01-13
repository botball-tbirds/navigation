// C-reated on Sun Mar 18 2012

#include <stdio.h>
int main() 
{
	//waiting for light to start the program.
	wait_for_light(0);	
	//making sure the claw and arm are in position.
	set_servo_position(1, 0);
	sleep(0.6);
	set_servo_position(0, 624);
	sleep(0.6);
	//this section allows the robot to come out of the starting box turn, drive forward and put itself in position to grab the polyps.
	mav(3, -600);
	mav(0, -600);
	sleep(7.9);
	mav(0, -500);
	mav(3, 500);
	sleep(1.6);
	mav(0, 500);
	mav(3, 500);
	sleep(0.8);
	mav(3, -800);
	mav(0, -800);
	sleep(1.8);
	mav(0, -300);
	mav(3, -100);
	sleep(1.5);
	ao();
	//the arm is lowered the claw closes capturing the polyps and the arm is raised to expose the touch sensor.
	set_servo_position(0, 800);
	sleep(0.6);
	set_servo_position(0, 1600);
	sleep(1.4);
	set_servo_position(1, 2048);
	sleep(0.6);
	set_servo_position(0, 924);
	sleep(0.6);
	set_servo_position(0, 624);
	sleep(0.6);
	//the robot turns toward MPA and drives straight until the touch sensor is triggered by hitting one of the walls of the MPA.
	mav(3, -500);
	mav(0, 500);
	sleep(1.6);
	mav(3,-200);
	mav(0,0);
	sleep(2.0);
	mav(0, -900);
	mav(3, -915);
	sleep(8.4);
	while(digital(8)==0)
	{
		mav(0, -800);
		mav(3, -875);	
		sleep(0.38);
		if(digital(8)==0)
		{
			mav(0, -800);
		mav(3, -875);	
		sleep(0.2);
		}
	}
	ao();
	//the arm is lowered and the claw is opened thus despensing the polyps. Now the claw opens and close. Arm shakes up and down to deposit any polyps that have gotten stuck in the claw. 
	set_servo_position(0, 724);
	sleep(0.6);
	set_servo_position(0, 1024);
	sleep(0.8);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(0, 924);
	sleep(0.2);
	set_servo_position(0, 1024);
	sleep(0.2);
	set_servo_position(1, 2048);
	sleep(1.4);
	set_servo_position(1, 0);
	sleep(1.4);
	set_servo_position(0, 524);
	sleep(0.6);
	set_servo_position(0, 1424);
	sleep(0.6);
	set_servo_position(0, 624);
	sleep(0.6);
	//the robot is now turning towards the wall with the turnstyle to set itself up for moves that will later be programmed.
	mav(0, 500);
	mav(3, 500);
	sleep(0.8);
	mav(0, -500);
	mav(3, 500);
	sleep(1.6);
	mav(0, -300);
	mav(3, -100);
	sleep(1.5);
	mav(3, -600);
	mav(0, -600);
	sleep(8.1);
	mav(0, -500);
	mav(3, 500);
	sleep(1.6);
	mav(0, -300);
	mav(3, -100);
	sleep(2.3);
	mav(3, -600);
	mav(0, -600);
	sleep(2.6);
	mav(0, -100);
	mav(3, -300);
	sleep(2.7);
	mav(3, -600);
	mav(0, -600);
	sleep(2.6);
	mav(0, -300);
	mav(3, -100);
	sleep(2.3);
}

