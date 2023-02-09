#include<stdio.h>
int main()
{
	int n,i,a[20],j=0;
	printf("enter no of elements in an array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	if(a[i]>0)
	{
		j++;
	}
	printf("no of pos nums=%d\n",j);
	return 0;
}
