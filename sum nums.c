#include <stdio.h>
sum(int a,int b)
{
	int c;
	c=a+b;     //c represents sum of two numbers i.e, a,b
	printf("sum=%d",c);  //output print sum
}
main()
{
	int a,b;   //declare a,b
	scanf("%d %d",&a,&b);
	sum(a,b);  //calling function
}
