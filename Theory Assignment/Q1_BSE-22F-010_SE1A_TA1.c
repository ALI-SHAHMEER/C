#include<stdio.h>
int main()
{
	int num,arm_num,num1,num2,num3,cube1,cube2,cube3,sum;
	
	
	printf("Enter 3 digit number:\n");
	scanf("%d", &num);
	arm_num = num;
	
	num1 = num/100;
	
	num2 = (num%100)/10 ; //n2 = ((n / 10) % 10);
	
	num3 = num%10 ;
	
	cube1 = (num1*num1*num1);
	cube2 = (num2*num2*num2);
	cube3 = (num3*num3*num3);
	sum = cube1 + cube2 + cube3;
	
	if(sum == arm_num && arm_num != 0)
	{
		printf("%d is a armstrong number",arm_num);
		printf("\n%d\n%d\n%d",num1,num2,num3);
	}
	else
	{
		printf("%d is not a armstrong number",arm_num);
	}
	
	return 0;
}
