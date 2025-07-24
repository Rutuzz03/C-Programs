#include <stdio.h>
int main() 
{
    int i, j, n, a;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1, a = 1; i <= n; i++, a += 2)
	{
        for (j = 1; j <= n - i; j++)
        {
        	printf("  ");
		}
        for (j = 1; j <= a; j++)
        {
        	printf("* ");
		}
        printf("\n");
    }
    return 0;
}
