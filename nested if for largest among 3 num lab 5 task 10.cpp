#include <stdio.h>
int main()

{
	int x,y,z;
	
	printf("Input 3 integer values:\n");
	scanf("%d %d %d",&x ,&y ,&z );
	
	if( x > y){
	
		if(x > z)
		{
	        printf("Value of x(%d) is the largest\n" , x);
	    } 
	    else{
						printf("Value of z(%d) is the largest\n" , z);
     }
     }   else{
		
	    	if( y > z)
	    	{
	    		printf(" Value of y(%d) is the largest\n", y);
		    }
			else
	        {
				printf("Value of z(%d) is the largest\n" , z);
			}
            }
        

	return 0;
	
}
