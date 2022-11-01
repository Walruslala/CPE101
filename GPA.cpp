#include<stdio.h>
#include<conio.h>
main()
{
	int A ;
	printf("Enter point:");
	scanf("%d",&A);
	if ((A<=100)&&(A>=80))
	printf("%d Grade is A \n",A);
	else if ((A<80)&&(A>=70))
	printf("%d Grade is B \n",A);
	else if ((A<70)&&(A>=60))
	printf("%d Grade is C \n",A);
	else if (A<50)
	printf("%d Grade is F \n",A);
	else
	printf("Enter point 0-100 \n");
	getch();
	return 0;
	
	
}
