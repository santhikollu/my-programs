#include <stdio.h>
main()
{
	int mat1[2][2],i,j;//declare data type
	printf("enter the matirx elements:\n");
	for(i=0;i<2;i++)//no.of rows
	{
		for(j=0;j<2;j++)//no.of columns
		{
			scanf("%d",&mat1[i][j]);//value from user
		}
	}
	printf("matrix1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mat1[i][j]);//output of first matrix
		}
		printf("\n");
    }
	int mat2[2][2];
	printf("enter the matrix elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("matrix 2:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mat2[i][j]);//output of second matrix
		}
		printf("\n");
	}
	int sum[i][j];
	printf("sum of matrix:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
        	sum[i][j]=mat1[i][j]+mat2[i][j];  //sum of matrix1 and matirx2
        	printf("%d\t",sum[i][j]);//output for sum of matrix
        }
        printf("\n");
    }
	
}
