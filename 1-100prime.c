#include <stdio.h>
int main() 
{
    int num, i, f;
    for (num = 1; num <= 100; num++) 
	{
        f = 0; 
        for (i = 1; i <= num; i++) 
		{
            if (num % i == 0) 
			{
                f++;
            }
        }
        if (f == 2) 
		{
            printf("%d \n", num);
        }
    }

    return 0;
}
