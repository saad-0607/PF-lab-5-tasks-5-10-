#include <stdio.h>
int main()
{
	
	int a,b,sum,diff,prodt,div;
	float mod;
	
	printf("Enter two numbers for program to carry out various arithmatic operations:\n");
	scanf("%d %d" ,&a ,&b);
	
	sum = a + b;
	diff = a - b;
	prodt = a * b;
	div = a / b;
	mod = a % b;	
	
	printf("Sum of your 2 inputs is: %d\n" ,sum);
	printf("Diffrence of your 2 inputs is: %d\n" ,diff);
	printf("Product of your 2 inputs is: %d\n" ,prodt);
	printf("division of your 2 inputs is: %d\n" ,div);
	printf("mod of your 2 inputs is: %.2f\n" ,mod);

	return 0;

}
