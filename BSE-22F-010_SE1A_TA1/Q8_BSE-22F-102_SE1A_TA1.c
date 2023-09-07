#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	for(i=1; i <= num; i++)
	{
		for(j=i; j <= num; j++)
		{
			printf(" ");
		}
		for(j=1; j<=(2*i-1); j++)
		{
			if(i==num || j==1 || j==(2*i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
