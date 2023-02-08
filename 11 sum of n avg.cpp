#include<stdio.h>
int main()
{
	int i,n,j=0;
	printf("enter the ending range :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		j=j+i;
	}
	printf(" sum is  :%d\n",j);
	printf(" avg is  :%d\n",j/n);
	return 0;
}