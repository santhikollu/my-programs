//read a prime number using function.
#include <stdio.h>
int prime(int b);   //prime is a user function
int prime(int b)
{
	int n,count=0;
	for(n=2;n<b;n++)  //condition for cheking prime number
	{
	    if(b%n==0)
	    count++;
	}
	if(count==0)
	{
		printf("prime number");
		count=0;
	}
	else
	{
		printf("not prime");
	}
}
main()
{
	int a;
	scanf("%d",&a);  //read the value of a
	prime(a);
}

