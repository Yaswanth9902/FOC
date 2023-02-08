#include<stdio.h>
int main()
{
	int a,b,i,temp=0;
	printf("enter the number :\n");
	scanf("%d%d",&a,&b);
	printf("before swapping :\n%d\n%d",a,b);
		temp=a;
		a=b;
		b=temp;
	printf("\nafter swapping :\n%d\n%d",a,b);	
	return 0;
}