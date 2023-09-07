#include<stdio.h>
int main()
{
	int num,org_num,sum,d1,d2,d3,d4;
	printf("Enter 4 digit number \n");
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
	
	if(sum%2!=0 && sum != 0)
	{
		printf("The sum of 4 number is odd %d,So %d",org_num,sum*sum);
	}
	else if(sum == 0)
	{
		printf("Zero is niether even nor odd number");
	}
	else
	{
		printf("The sum of 4 number is even %d,So %d",org_num,sum*sum*sum);
	}
	
	// printf("%d,%d,%d,%d",d1,d2,d3,d4);
	
	return 0;
}
