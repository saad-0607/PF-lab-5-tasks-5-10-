#include <stdio.h>
int main()
{
	int a,b;
	
	printf("Input two integer values:\n");
	scanf("%d %d", &a, &b);
	
	if(a == b)
	{
		printf("a = b is true\n");
	}else{
	     printf("a = b is false\n");
    }
	
	if(a > b)
	{
		printf("a > b is true\n");
	}
	else
	{
		printf("a > b is false\n");
	}
	
	if(a < b)
	{
		printf("a < b is true\n");
	}
	else
	{
		printf("a < b is false\n");
	}
	
	if(a != b)
	{
		printf("a != b is true\n");
	}
	else
	{
		printf("a != b is false\n");
	}
	
	if(a >= b)
	{
		printf("a >= b is true\n");
	}
	else
	{
		printf("a >= b is false\n");
	}
	
	if(a <= b)
	{
		printf("a <= b is true\n");
	}
	else
	{
		printf("a <= b is false\n");
	}
	
	return 0;	
	
}
