// Created on Sun Dec 9 2012

int main() 
{
	create_connect();
	while(analog(0)<300)
	{
		create_drive_straight(200);
	}
	create_stop();
	create_disconnect();
}
