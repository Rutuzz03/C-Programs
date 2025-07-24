#include<stdio.h>
void main()
{
	int a[2][2]={{1,2}, {3,4}}, t[2][2];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("a[%d][%d]: %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nTranspose...\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			t[i][j]=a[j][i];
			printf("a[%d][%d] : %d\t", i,j, t[i][j]);
		}
		printf("\n");
	}
}