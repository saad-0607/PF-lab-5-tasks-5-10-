#include <stdio.h>
int main()
{
	int x,y,z,largest;
	
	printf("Input 3 numbers:\n");
	scanf("%d %d %d" ,&x,&y,&z);
	
	(x > y)?  ((x > z)?  printf("X=%d is the largest.\n" ,x) : printf("Z=%d is the largest.\n" ,z)) : ((y > z)?  printf("Y=%d is the largest.\n") : printf("Z=%d is the largest.\n" ,z));
	
	return 0;
	
}





    
