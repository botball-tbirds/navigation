/***************************************************************************
*********    Witten by Duncan McLain on March 21, 2012
*********	This program drives moves toward Botguy and grabs him around the body using the claw that *********has been consturcted.
*********  After grabbing botguy, he will be returned to the "starting box". After placing him in the *********beach it will then grab the brain coral and place him in the MPA.
*********After placing the brain coral inside the MPA our robot will grab the other brain coral and then
*********place them in the MPA.
*********
*********
*********
*********FIX tiems in calibration to the speeds!!!!
*********
*********
***************************************************************************/
/* Libraries used in Botball are automatically included, but list any additional includes below */
/* #defines and constants go below.*/
#define SLOW 100
#define FAST 300
#define VERY_FAST 500
#define SUPER_FAST 1000
/* Global variables go below (if you absolutely need them).*/

/*Function prototypes below*/





int main()
{
	// this starts the robot
	wait_for_light(0);
	shut_down_in(20.0);
	//this shuts the robot down after 120.0 seconds
	create_connect();
	while (1);
	enable_servos();
	msleep(500);
	create_full();
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(1650);
	create_stop();
	msleep(300);
	create_drive_direct(SUPER_FAST, -SUPER_FAST);
	msleep(445);
	create_stop();
	msleep(300);
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(1650);
	create_stop();
	set_servo_position(0, 0);
	set_servo_position(1, 0);
	
	//retrieve botguy
	msleep(500);
	create_drive_direct(-SUPER_FAST, -SUPER_FAST);
	msleep(1650);
	create_stop();
	msleep(500);
	create_drive_direct(SUPER_FAST, -SUPER_FAST);
	msleep(445);
	create_stop();
	msleep(500);
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(1650);
	create_stop();
	set_servo_position(1, 0);
	
	//put botguy on beach
	create_drive_direct(-SUPER_FAST, -SUPER_FAST);
	msleep(650);
	//leave beach
	create_drive_direct(-SUPER_FAST, SUPER_FAST);
	msleep(190);
	create_stop();
	msleep(500);
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(650);
	create_stop();
	msleep(500);
	create_drive_direct(FAST, -FAST);
	msleep(380);
	create_stop();
	msleep(300);
	create_drive_direct(FAST, FAST);
	msleep(2520);
	create_stop();
	create_drive_direct(-SUPER_FAST, SUPER_FAST);
	msleep(135);
	create_stop();
	create_drive_direct(SUPER_FAST, SUPER_FAST);
	msleep(380);
	//retrieve brain coral
	create_stop();			
	msleep(300);
	create_drive_direct(-FAST, FAST);
	msleep(1075);
	create_stop();
	msleep(100);
	create_drive_direct(FAST, FAST);
	msleep(5950);
	// put brain coral in MPA
	create_stop();
	msleep(100);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	disable_servos();
	create_disconnect();
	
}

/*Function definitions go below.*/



