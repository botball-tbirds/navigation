// 									       	PORT 0 = ARM                    PORT 3 = CLAW

#define SHUT_DOWN_TIME shut_down_in
#define LIGHT_START wait_for_light
#define SERVO set_servo_position
#define TURN create_drive_direct
#define DRIVE create_drive_straight
#define CONNECT create_connect();
#define STOP create_stop();
#define DISCONNECT create_disconnect();
#define GO 500
#define ARM_DOWN 1800
#define ARM_UP 700
#define CLAW_OPEN 0
#define CLAW_CLOSED 1024
#define TOPHAT analog


int main()
{
		//This command will enable the robot to wait for a light signal to start
	LIGHT_START(1);
		//This command will enable the robot to shut down in 2 minutes
	SHUT_DOWN_TIME(120);
		//These commands will set the arm/claw for driving
	SERVO(0, ARM_DOWN);
	SERVO(3, CLAW_OPEN);
	enable_servos();
		//This section will get the robot to the line.
	CONNECT
	DRIVE(GO);
	sleep(1.0);
		//This section will detect the line and turn the robot.
		while(TOPHAT(0)<(200))
		{
			DRIVE(GO);
		}
	TURN(GO,-50);
	msleep(860);
		// This section will drive the robot up to the top of the line
		while(TOPHAT(0)<(200))
		{
			DRIVE(GO);
		}
		//This section will turn the robot to face botguy
	TURN(GO, -GO);
	msleep(300);
	DRIVE(GO);
	msleep(525);
	TURN(-GO, GO);
	msleep(447);
	STOP
	msleep(1555);
		//This section will make the arm grab botguy
	SERVO(0, 1000);
	msleep(750);
	SERVO(0, ARM_UP);
	msleep(400);
	SERVO(3, CLAW_CLOSED);
	msleep(400);
		//This section will drive botguy back to the beach
	DRIVE(-GO);
	sleep(1.63);
	TURN(GO, -GO);
	msleep(385);
	DRIVE(GO);
	msleep(1350);
	STOP
		// This section will have the robot retrieve the brain coral
	sleep(2.0);
	DRIVE(-GO);
	msleep(1225);
	TURN(-GO, GO);
	msleep(445);
	DRIVE(GO);
	sleep(1.0);
	
	
	
		
	disable_servos();
	STOP
	DISCONNECT
}
