#include <stdio.h>
int main() 
{
    int n=0, n1=1, n2, i, c;
    printf("Enter the number of times: ");
    scanf("%d", &c);
    printf("Fibonacci Series: ");
    printf("%d ", n);
    printf("%d ", n1);
    for (i = 0; i < c; i++) 
	{
		n2=n+n1;
        printf("%d ", n2);
        //printf("%d ", n1);
        n = n1;
        n1 = n2;
    }
    printf("\n");
    return 0;
}
