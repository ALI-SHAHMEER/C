#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter number 1:\n");
	scanf("%d", &num1, &num2 );
	printf("\nEnter number 2:\n");
	scanf("%d", &num2);
	
	printf("\nNumber 1 before swaping %d \n", num1);
	printf("\nNumber 2 before swaping %d \n", num2);
	
	
	num1 = num1 * num2;
	num2 = num1/num2;
	num1 = num1/num2;
	
	printf("\nNumber 1 after swaping %d \n", num1);
	printf("\nNumber 2 after swaping %d \n", num2);
	
	return 0;
}
