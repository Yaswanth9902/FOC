#include<stdio.h>
#include<math.h>
int main()
{
	int num,result=0,r,n;
	printf("enter the number :");
	scanf("%d",&num);
	n=num;
    while(num>0)
	{
		r=num%10;
		result=result+(r*r*r);
		num=num/10;
	}
	if(result==n)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
}