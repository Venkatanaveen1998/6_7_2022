#include<stdio.h>
void check(int a,int b)
{
	int temp=0,cnt=0;
	for(int i=0;i<=31;i++)
	{
		temp=a|(1<<i);
			if(temp==b)
			{
				++cnt;
				printf("%d %d ",i,cnt);
			}
	}
}

int main()
{
	int a=17,b=29;
        check(a,b);
}
