include <stdio.h>
#include <math.h>
main()
int main()
{
	int choice;
	printf("Enter a number between 1 and 5: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Food item - Sandwich \nPrice - Rs. 149");
			break;
		case 2:
			printf("Food item - French Fries \nPrice - Rs. 325");
			break;
		case 3:
			printf("Food item - Pasta \nPrice - Rs. 143");
			break;
		case 4:
			printf("Food item - Burger \nPrice - Rs. 165");
			break;
		case 5:
			printf("Food item - Pizza \nPrice - Rs. 200");
			break;
		default:
			printf("Invalid Input");
	}
