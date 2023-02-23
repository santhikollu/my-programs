#include<stdio.h>
main()
{
	int i,j,m,n;
	int mat[m][n];
	printf("enter the value of m,n:\n");
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("enter the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	int k,yes=0,no=0;
    printf("enter the value of k:");
    scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(k==mat[i][j])
			{
			     yes=1;
			}
			else
			{
				no=1;
			}     
		}
	}
	if(yes==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
