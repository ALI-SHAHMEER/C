#include<stdio.h>
int main()
{
	int num,org_num,rem,binary,octal,unit,base1=2,base2=16,base3=8,i,j,dividend,remainder ;
	char choice;
	printf("Enter number in decimal number system:\n");
	scanf("%d", &num);
	org_num = num;
	rem = 0;
	binary = 0;
	unit = 1;
	printf("To convert into Hexadecimal Enter H\n");
	printf("To convert into Octal Enter O\n");
	printf("To convert into Binary Enter B\n");
	scanf(" %c", &choice);
	if(choice == 'H' || choice == 'h') 
	{
		char hexa[50];
	    dividend = num;
	    while(dividend != 0)
	    {
	        remainder = dividend % 16;
	        if(remainder < 10)
	        {
	            hexa[i] = 48 + remainder;
	        }
	        else
	        { 
	            hexa[i] = 55 + remainder;
	        }
	        dividend = dividend/16;
	        i++;
	    }
	    printf("%d converted into Hexa decimal with the of %d is = ", org_num,base2);
	    for(j=i-1; j>=0; j--)
	    {
	        printf("%c",hexa[j]);
    	}
	}
	
	else if(choice == 'O' || choice == 'o')
	{
		int octal[50];
		while(num!=0)
		{
			octal[i]= num % 8;
			num = num / 8;
			i++;
		}
		printf("%d converted into octal with the base of %d is = ",org_num,base3);
		for(j=i-1; j>=0; j--)
	    {
	        printf("%d",octal[j]);
    	}
	}
	else if(choice == 'B' || choice == 'b')
	{
		int binary[50];
		while(num)
		{ 
			binary[i]= num%2;
			num = num / 2;
			i++;	
		}
		printf("%d converted into binary with the base of %d is =",org_num,base1);
		for(j=i-1; j>=0; j--)
		{
			printf("%d",binary[j]);
		}
	}
	else
	{
		printf("\nEnter valid alphabet");
	}
	return 0;
}
