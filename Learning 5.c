#include <stdio.h>
#include <math.h>

int sumOfDigits(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = sumOfDigits(num);
    printf("Sum of digits = %d", sum);
    
    return 0;
}

int sumOfDigits(int num)
{
	if (num>=1 && num<=9)
	return num;
	else
	return(num%10 + sumOfDigits(num/10));
}
