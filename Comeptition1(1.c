// Created on Sun Dec 9 2012

int main() 
{
	create_connect();
	create_drive_straight(500);
	sleep(2);
	create_drive_direct(500, -500);
	msleep(440);
	create_drive_straight(500);
	sleep(3);
	while(get_create_rbump(0.001) ==0)
	{
		create_drive_straight(500);
	}
	create_drive_direct(-500, 500);
	msleep(375);
	create_drive_straight(500);
	msleep(1500);
	create_stop();
	create_disconnect();
}
