#include<stdio.h>
int main()
{
	int p,t,r;
	printf("enter the principle amount , time ,rate of intrest\n");
	scanf("%d%d%d",&p,&t,&r);
	printf("simple intrest:%d",(p*t*r)/100);
}