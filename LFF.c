//												Analog 0 = Right         Analog 1 = Left
#define A 500
#define CONNECT create_connect();
#define STOP create_stop();
#define DISCONNECT create_disconnect();
#define DRIVE create_drive_straight
#define RIGHT_TOPHAT analog(0)
#define LEFT_TOPHAT analog(1)
#define TURN create_drive_direct
#define LIGHT_START wait_for_light
#define SHUT_DOWN_TIME shut_down_in



int main()
{
		//This section will start the robot on a light recognition, and have it shut down in 2 minutes
	LIGHT_START(2);
	SHUT_DOWN_TIME(120);
		// This section will drive the robot out of the starting box
	CONNECT
	DRIVE(A);
	sleep(1.0);
		//This section will detect the line and turn onto it
	while(LEFT_TOPHAT<250)
	{
		DRIVE(A);
	}
	TURN(A, -50);
	msleep(800);
		//This section will have the robot follow the line up to the top
	while(RIGHT_TOPHAT<250&&LEFT_TOPHAT<250)
	{			
		DRIVE(A);
		if(RIGHT_TOPHAT>250)
		{
			TURN(-A, A);
			msleep(200);
		}
		if(LEFT_TOPHAT>250)
		{
			TURN(A, -A);
			msleep(200);
		}
	}
	STOP
	DISCONNECT
}	
		
