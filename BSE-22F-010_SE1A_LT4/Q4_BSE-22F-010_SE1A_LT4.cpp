#include<stdio.h>
int main()
{
	int radius,radius3,volume;
	printf("Enter radius of sphere:");
	scanf("%d", &radius);
	radius3 = (radius*radius*radius);
	volume = (4*3.141*radius3)/3;
	printf("volume of sphere is: %d",volume);
	return 0;
}
