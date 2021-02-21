#include <stdio.h>
#include <math.h>
int main()
{
    int mks;
    printf("Enter marks: ");
    scanf("%d", &mks);
    
    if(mks >= 85 && mks <= 100)	printf("Grade A");
    else if(mks >= 70 && mks <= 84)	printf("Grade B");
    else if(mks >= 55 && mks <= 69)	printf("Grade C");
    else if(mks >= 40 && mks <= 54)	printf("Grade D");
    else printf("Grade F");
    
    return 0;
}

