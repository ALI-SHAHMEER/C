#include<stdio.h>
int main()
{
	int num,j=0,k=1,l,i;
	printf("Enter any number for making sequence: \n");
	scanf("%d", &num);
	for(i=0 ;i<=num ;i++)
	{
	    printf("%d,",j);
	    l=j+k;
	    j=k;
	    k=l;
	}
	return 0;
}
