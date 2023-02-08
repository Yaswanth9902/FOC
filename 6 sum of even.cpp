#include<stdio.h>
int main()
{
	int i,n,j=0;
	printf("enter the ending range :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			j=j+i;
			
		}
	}
	printf(" sum of even is :%d\n",j);
	return 0;
}