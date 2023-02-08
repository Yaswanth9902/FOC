#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j=0,k=0;
	printf("enter the limit of a :");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		j=i*i*i;
		k=k+j;
	}
	printf("%d\n",k);
	return 0;
}