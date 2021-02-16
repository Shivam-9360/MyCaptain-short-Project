#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the values for x and y:");
	scanf("%d %d", &x, &y);
	
	printf("Orignal Values \nx = %d\ty = %d", x, y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf("\nNew Values \nx = %d\ty = %d", x, y);
}
