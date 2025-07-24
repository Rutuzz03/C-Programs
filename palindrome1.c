#include<stdio.h>
int main()
{
	int n=151, rev=0, m=0, a;
	a=n;
	while(n!=0)
	{
		m=n%10;
		rev=rev*10+m;
		n=n/10;
	}
	if(a==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}