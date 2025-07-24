#include<stdio.h>
#include<string.h>
int main()
{
	int i; char c[]="RUTUJA", C[]="rutuja";
	for (i=0; i<=strlen(c); i++)
	{
		printf("%c", c[i]+32);
	}
	for (i=0; i<=strlen(C); i++)
	{
		printf("%c", C[i]-32);
	}
}