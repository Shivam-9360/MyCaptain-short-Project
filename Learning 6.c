#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num, int i);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPrime(num, num-1))	printf("is a prime number");
    else	printf("is not a prime number");
    
    return 0;
}

bool isPrime(int num, int i)
{
	if(i == 2)
	return num%2 != 0;
	else
	return num%i != 0 && isPrime(num, i-1);
}
