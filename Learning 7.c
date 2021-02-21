#include <stdio.h>
#include <math.h>

int lcm(int n1, int n2, int i);

int main()
{
    int num1, num2;
    printf("Input fisrt number: ");
    scanf("%d", &num1);
    
    printf("Input second number: ");
    scanf("%d", &num2);
    
    printf("Output LCM of %d and %d is %d", num1, num2 , lcm(num1, num2, 1));
    
    return 0;
}

int lcm(int n1, int n2, int i)
{
	int bigger = n1>n2 ? n1:n2;
	int smaller = n1>n2 ? n2:n1;
	
	if(n1==n2)
	return n1;
	
	else if(bigger%smaller == 0)
	return bigger;
	
	else
	return lcm(bigger/i*++i, smaller, i);
}
