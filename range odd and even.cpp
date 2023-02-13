#include<stdio.h>
int main()
{
	int n,m,i;
	printf("enter the starting range:");
	scanf("%d",&m);
	printf("enter the ending range");
	scanf("%d",&n);
	printf("even\n ");
	for(i=m;i<=n;i++)
	{
	if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	printf("odd\n");
	for(i=m;i<=n;i++)
	{
	if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
		
	return 0;
}