
#include <stdio.h>
#define CONNECT create_connect();
#define STOP create_stop();
#define DISCONNECT create_disconnect();
#define MSLEEP msleep
#define SLEEP sleep
#define DRIVE create_drive_straight
#define TURN create_drive_direct
#define SUPER_FAST 1000
#define FAST 500
#define ARM_UP 724
#define ARM_DOWN 1800
#define C_C 1024
#define C_O 0
int main() 
{
	printf("checklist");
	printf("hit black button when ready");
	while(black_button());
	printf("MAKE SURE CREATE IS ON!!!!!!!!");
	while(!black_button());
	printf("MAKE SURE ARM IS IN DOWN POSITION!!!!!!!!");
	while(!black_button());
	printf("MAKE SURE ARM AND CLAW WORK");
	while(!black_button());
	printf("CHECK POSITION OF CLAW AND ARM");
	while(!black_button());
	printf("MAKE SURE LIGHT SENSORT IS CALIBRATED");
	while(!black_button());
	// this starts the robot    SECTion 1
	wait_for_light(0);
	shut_down_in(120.0);
	//this shuts the robot down after 120.0 seconds
	while(create_connect());
	
		//connects create to cbc
	set_servo_position(3, 0);
	set_servo_position(0, 1800);
	enable_servos();
	msleep(500);
	create_full();
	//section 2
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(1646);
	//leave beach
	create_stop();
	msleep(300);
	create_drive_direct(SUPER_FAST, -SUPER_FAST);
	msleep(435);
	//turn towards center
	create_stop();
	msleep(300);
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(1600);
	//move towards botguy
	create_stop();
	msleep(500);
	//section 3
	set_servo_position(0, 1424);
	msleep(1800);
	set_servo_position(0, 1100);
	msleep(1800);
	set_servo_position(0, 924);
	msleep(1800);
	set_servo_position(0, 724);
	msleep(1800);
	set_servo_position(3, 1024);
	msleep(1800);
	set_servo_position(0, 924);
	msleep(1800);
	set_servo_position(0, 1100);
	msleep(1800);
	set_servo_position(0, 1200);
	msleep(2000);
	
	
	
	//retrieve botguy
	//section 4
	create_drive_direct(-FAST, FAST);
	msleep(445);
	create_stop();
	create_drive_direct(-FAST, -FAST);
	msleep(2000);
	create_stop();
	create_drive_direct(FAST, -FAST);
	msleep(445);
	create_stop();	
	create_drive_direct(-FAST, -FAST);
	msleep(900);
	create_stop();
	msleep(1600);
	create_stop();
	set_servo_position(3, 0);
	set_servo_position(0, 1800);
	msleep(1200);
	set_servo_position(0, 1200);
	msleep(1000);
	set_servo_position(0, 1800);
	msleep(1000);
	create_drive_direct(1000, 1000);
	msleep(800);
	create_drive_direct(-1000, -1000);
	msleep(800);
	DRIVE(SUPER_FAST);
	MSLEEP(800);
	TURN(-SUPER_FAST, SUPER_FAST);
	MSLEEP(460);
	DRIVE(SUPER_FAST);
	MSLEEP(1380);
	TURN(SUPER_FAST, -SUPER_FAST);
	MSLEEP(425);
	DRIVE(SUPER_FAST);
	SLEEP(1.5);
	while(get_create_lbump(0.01) == 0)
	{
		DRIVE(SUPER_FAST);
	}
	TURN(-SUPER_FAST, SUPER_FAST);
	MSLEEP(435);
	TURN(SUPER_FAST, 975);
	MSLEEP(500);
	while(get_create_rbump(0.01) == 0)
	{
		TURN(SUPER_FAST, 990);
	}
	
	
	
	create_stop();
	create_disconnect();
	
	
	
	
}
