#include<stdio.h>
int main()
{
	int choice;
	printf("***MENU***");
	printf("\n1- Armstrong number");
	printf("\n2- Digit sum");
	printf("\n3- Swap num");
	printf("\n4- Reverse num");
	printf("\nEnter your choice:");
	scanf("%d", &choice);
	printf("\nUser choose %d",choice);
	printf("\n**************************");
	if(choice == 1)
	{
		int num,arm_num,num1,num2,num3,cube1,cube2,cube3,sum;
	
	
		printf("\nEnter number: ");
		scanf("%d", &num);
		arm_num = num;
	
		num1 = num/100;
	
		num2 = (num%100)/10 ;
	
		num3 = num%10 ;
	
		cube1 = (num1*num1*num1);
		cube2 = (num2*num2*num2);
		cube3 = (num3*num3*num3);
		sum = cube1 + cube2 + cube3;
	
		if(sum == arm_num && arm_num != 0)
		{
			printf("Number is armstrong");
			printf("\n%d\n%d\n%d",num1,num2,num3);
		}
		else
		{
			printf("%d is not a armstrong number",arm_num);
			printf("\n%d\n%d\n%d",num1,num2,num3);
		}
	}
	else if(choice == 2)
	{
		int num,org_num,sum,d1,d2,d3,d4,square;
		printf("\nEnter number: ");
		scanf("%d", &num);
		org_num = num;
		
		d1 = num % 10;
		num = num / 10;
		d2 = num % 10;
		num = num /10;
		d3 = num % 10;
		num = num / 10;
		d4 = num % 10;
		num = num /10;
		
		sum = d1 + d2 + d3 + d4;
		square = sum*sum;
		printf("\nSum is %d",sum);
		printf("\n%d",square);
	}
	else if(choice == 3)
	{
		int num1,num2;
		printf("\nEnter number 1:\n");
		scanf("%d", &num1, &num2 );
		printf("\nEnter number 2:\n");
		scanf("%d", &num2);
		
		//printf("\nNumber 1 before swaping %d \n", num1);
		//printf("\nNumber 2 before swaping %d \n", num2);
		
		
		num1 = num1 * num2;
		num2 = num1/num2;
		num1 = num1/num2;
		
		printf("\nNumber 1 after swaping %d \n", num1);
		printf("\nNumber 2 after swaping %d \n", num2);
	}
	else if(choice == 4)
	{
		int num,rev,mod;
		printf("\nEnter 2 digit number to reverse = ");
		scanf("%d", &num);
		mod = num % 10;
		rev = num / 10;
		printf("%d digit revrse number = %d%d",num,mod,rev);
	}
	else
	{
		printf("\nPlease choose number between 1-4 only.");
	}
	return 0;
}
