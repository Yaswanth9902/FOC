#include<stdio.h>
int main()
{
	int i,n,k=1;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=k*i;	
	}
	printf("%d\n",k);
	return 0;
}