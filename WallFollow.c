// Created on Sun Dec 9 2012

int main() 
{
	create_connect();
	while(1)
	{
		create_drive_direct(200, 300);
		if(get_create_rbump(0.01) ==1)
		{
			create_drive_direct(300, 200);
			msleep(800);
		}
	}
	create_stop();
	create_disconnect();
}
