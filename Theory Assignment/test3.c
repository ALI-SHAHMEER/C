#include<stdio.h>
int main()
{
	int myAge = 43; // an int variable

	printf("%d\n", myAge);  // Outputs the value of myAge (43)
	printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)


	int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
	
	// Output the value of myAge (43)
	printf("%d\n", myAge);
	
	// Output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", &myAge);
	
	// Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", ptr);
	
	return 0;
}
