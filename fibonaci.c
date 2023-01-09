#include<header.h>
#include<stdio.h>

int fibonaci(int a)
{
	int b = 0;
	int c = 1;
	printf(" %d\n",b);
	printf(" %d\n",c);
	for(int i=1;i<a;i++)
	{
		int total = b + c;
		b = c;
		c = total;
		printf(" %d\n",total);
	}	
	
 	return 0;
}	
