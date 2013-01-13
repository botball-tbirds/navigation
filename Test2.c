// Created on Sun Dec 2 2012

int main() 
{
	create_connect();
	create_drive_direct(1000, -1000);
	sleep(5000);
	create_stop();
	create_disconnect();	
}
