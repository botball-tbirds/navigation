// Created on Sun Dec 2 2012

int main() 
{
	create_connect();
		while (analog(5)<400)
	{
		create_drive_straight(200);
	}
	sleep(5);
	create_drive_straight(500);
	create_stop();
	create_disconnect();
}
