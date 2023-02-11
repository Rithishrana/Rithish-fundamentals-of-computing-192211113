#include<stdio.h>
int main ()
{
	int n,i,fib1=0,fib2=1,nextfib;
	printf("Enter the number of terms in the series:");
	scanf("%d",&n);
	printf("fibonacci series is %d%d",fib1,fib2);
	for(i=2;i<n;i++)
	{
		nextfib=fib1+fib2;
		printf("%d",nextfib);
		fib1=fib2;
		fib2=nextfib;
	}
	return 0;
}