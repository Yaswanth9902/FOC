#include<stdio.h>
int main()
{
	int i,n,sum=0,m;
	printf("enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum is : %d",sum);
	return 0;
}