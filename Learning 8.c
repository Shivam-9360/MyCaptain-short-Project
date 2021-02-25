#include <stdio.h>
#include <math.h>

int main()
{
    int matrix[3][3];
    //int *p;
    int i, j;
    int sum;
    
    printf("Enter elements in the matrix: \n");
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		printf("Element - [%d][%d]: ", i+1, j+1);
    		//*p = matrix[i][j];
    		scanf("%d", &matrix[i][j]);
    		//matrix[i][j] = *p;
		}
	}
	
	printf("The Matrix is: \n");
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		//*p = matrix[i][j];
    		printf("%d \t", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++)
    {
    	sum = sum = matrix[i][i];
	}
	printf("Sum of diagonal = %d", sum);
    return 0;
}
