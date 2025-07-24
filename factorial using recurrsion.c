#include<stdio.h>
int main()
{
	int r;
	r=fact(5);
	printf("%d", r);
}
int fact(int n)
{
	if(n==1 || n==0)
	return 1;
	else
	return n*(fact(n-1));
}