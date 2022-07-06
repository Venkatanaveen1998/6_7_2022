#include<stdio.h>
int main()
{
	int num;
	printf("enter which number u want find high and low bit set or not");
	scanf("%d",&num);
	if((num&1)==1)
		printf("the lowest bit position is set\n");
	else if((num&(1<<31))==1)
		printf("the highest bit position is set \n");
}
