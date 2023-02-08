#include<stdio.h>
int main()
{
	int i,n,s=0,m;
	printf("enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		s=s*10+m;
		n=n/10;
	}
	printf("reverse : %d",s);
	return 0;
}