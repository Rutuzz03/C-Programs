#include<stdio.h>
int main()
{
	char s[]="javatpoint";
	int count=0, i=0;
	printf("String: %s\n", &s);
	while(s[i]!=NULL)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("The vowels in the string: %d", count);
}