#include<stdio.h>
int main()
{
	int n,digit[20],i;
	printf("Enter number:\n");
	scanf("%d", &n);
	
	for(i=0; n>0;i++)
	{
		digit[i] = n%10;
		n = n/10;
		printf("\n%d = %d ",i,digit[i]);	
	}
	return 0;
}
