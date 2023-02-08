#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j=0;
	printf("enter the limit of a :");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		j=j+i;
	}
	printf("sum of a numbers :%d\n",j);
	return 0;
}