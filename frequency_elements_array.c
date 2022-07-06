#include<stdio.h>
int main()
{
	int a[]={1,2,3,1,1,2,4,6,8,4,6}, size,cnt=0;
	size=sizeof(a)/sizeof(a[0]);
	printf(" %d \n",size);
	for(int i=0;i<=size-1;i++)
	{
		cnt=0;
		int temp;
		temp=a[i];
		if(a[i]!=-1)
		{
		for(int j=i+1;j<=size-1;j++)
		{
			if(a[i]==a[j])
			{
				printf("hello \n");
			        cnt=++cnt;
				a[j]=-1;
			}
		}
		printf("%d %d \n",a[i],cnt+1);
		}
		a[i]=-1;
	}	
}
