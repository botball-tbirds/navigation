
//hello my freinds how are you today
int logan[3][3];
>>>>>>> added comment
int print_map(int map[3][3]);
int load_map();
int main() 
{
	int x_location=0;
	int y_location=0;
	int x_goal=2;
	int y_goal=0;
	load_map();
	
	logan[y_location][x_location]=0;
	x_goal=2;
	y_goal=0;
	print_map(logan);
}

int print_map(int map[3][3])
{
	int x = 0;
	int y = 0;
	for(y=0; y<3; y++)
	{
		for(x=0; x<3; x++)
		{
			printf("%d",map[y][x]);
		}
		printf("\n");
	}
}
int load_map()
{
	logan[0][0]=1;
	logan[0][1]=-1;
	logan[0][2]=3;
	logan[1][0]=4;
	logan[1][1]=5;
	logan[1][2]=6;
	logan[2][0]=7;
	logan[2][1]=8;
	logan[2][2]=9;
}
