#include<stdio.h>
void set_bit(int num,int pos)
{
	int a;
	a=num|(1<<pos);
	printf("after setting the bit %d ",a);
}
void clear_bit(int num,int pos)
{
	int a;
	a=num&(~(1<<pos));
	printf("after the bit clear %d ",a);
}
void toggle_bit(int num,int pos)
{
	int a;
	a=num^(1<<pos);
	printf("after the bit toggled %d ",a);
}
int main()
{
	int num,pos,choice;
	printf("enter number\n");
	scanf("%d",&num);
	printf("enter which position u want to be set or clear or toggle\n");
	scanf("%d",&pos);
	printf(" 1.set the position \n 2. clear the position \n 3. toggle the position\n");
        scanf("%d",&choice);
	switch(choice)
	{
		case 1 : set_bit(num,pos); break;
	        case 2 : clear_bit(num,pos); break;
	        case 3 :toggle_bit(num,pos); break;
	}
}
