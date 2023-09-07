#include<stdio.h>
int main()
{
	int num,rev,mod;
	printf("Enter 2 digit number to reverse = ");
	scanf("%d", &num);
	mod = num % 10;
	rev = num / 10;
	printf("%d digit revrse number = %d%d",num,mod,rev);
	return 0;
}
