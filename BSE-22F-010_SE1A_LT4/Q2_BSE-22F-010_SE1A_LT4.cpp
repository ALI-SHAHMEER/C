#include<stdio.h>
int main()
{
	int num_1,num_2,num_3,sum;
	printf("Enter number 1=");
	scanf("%d", &num_1);
	printf("Enter number 2=");
	scanf("%d", &num_2);
	printf("Enter number 3=");
	scanf("%d", &num_3);
	sum = (num_1+num_2+num_3);
	printf("The sum of 3 number is: %d",sum);
	return 0;
}
