#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],mat3[3][3],sum=0,i,j;
	printf("enter first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&mat1[i][j]);
	}
	printf("enter second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&mat2[i][j]);
	}
	printf("mul of two matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			sum=sum+mat1[i][j]+mat2[i][j];
			mat3[i][j]=sum;
		}
    }
	printf("result of two matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",mat3[i][j]);
		printf("\n");
    }return 0;
}
