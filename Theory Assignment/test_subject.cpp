#include<stdio.h>
int main()
{
	int num,i=1,temp,rem,octal;
    printf("Enter Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
    {
    	rem = temp%8;
    	printf("\n%d",rem);
    	octal = octal+i*rem;
    	i = i * 10;
    	temp = temp / 8;
    	
	}
    printf("\n%d number converted into octal with base 8 = %d",num,octal);
	return 0;
}
