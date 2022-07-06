#include<stdio.h>
main()
{
	int n=12345,a,b=0;
	while(n)
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	}
	printf("%d \n",b);
}
