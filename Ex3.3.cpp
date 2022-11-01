#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	x = 4;
	y = x++;
	printf(" x = %d \t y =%d \n", x,y);
	x = 4;
	y = ++x;
	printf(" x = %d \t y =%d \n", x,y);
	getch();
	return 0;
}
