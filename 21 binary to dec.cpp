#include<stdio.h>
int main()
{
	int n,b=1,dec=0,rem;
	printf("enter the binary :");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		dec=dec+rem*b;
		n=n/10;
		b=b*2;
	}
	printf("the deciaml value is :%d",dec);
	return 0;
}