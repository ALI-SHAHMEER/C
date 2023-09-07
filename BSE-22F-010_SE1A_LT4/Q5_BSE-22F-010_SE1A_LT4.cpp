#include<stdio.h>
int main()
{
	int ans,total_marks,obtain_marks,percentage;

	total_marks = 5;
	obtain_marks = 5;
	
	printf("Q1-Founder of lunix OS\n\t[1]Mark Zuckerberg\n\t[2]Steve Jobs\n\t[3]Linus Torvalds\n\tANS:");
	scanf("%d", &ans);
	if(ans == 3)
	{
		printf("\n============================");
		
	}
	else
	{
		printf("\n============================");
		obtain_marks -= 1;
	}
	printf("\nQ2-Founder of Microsoft\n\t[1]Mark Zuckerberg\n\t[2]Bill Gates\n\t[3]Linus Torvalds\n\tANS:");
	scanf("%d", &ans);
	
	if(ans == 2)
	{
		printf("\n============================");
		
	}
	else
	{
		printf("\n============================");
		obtain_marks -= 1;
	}
	printf("\nQ3-Founder of Hackintosh\n\t[1]Steve Jobs\n\t[2]Bill Gates\n\t[3]Linus Torvalds\n\tANS:");
	scanf("%d", &ans);
	
	if(ans == 1)
	{
		printf("\n============================");
		
	}
	else
	{
		printf("\n============================");
		obtain_marks -= 1;
	}
	printf("\nQ4-Which programming language used to built kernel of OS?\n\t[1]PASCAL\n\t[2]Python\n\t[3]C\n\tANS:");
	scanf("%d", &ans);
	
	if(ans == 3)
	{
		printf("\n============================");
		
	}
	else
	{
		printf("\n============================");
		obtain_marks -= 1;
	}
	printf("\nQ5-Which programming language used in machine learning\n\t[1]Java\n\t[2]Kotlin\n\t[3]Prolog\n\tANS:");
	scanf("%d", &ans);
	
	if(ans == 3)
	{
		printf("\n============================");
		
	}
	else
	{
		printf("\n============================");
		obtain_marks -= 1;
	}
	
	
	percentage = (obtain_marks*100)/total_marks;
	printf("\nThe percentage of quiz is: %d",percentage);
	return 0;
}
