#include<stdio.h>
int main()
{
	int distance, meter_per_second;
	printf("Enter speed in Kilometer per second: ");
	scanf("%d", &distance);
	meter_per_second = (distance*1000)/3600;
	printf("Speed in Meter per second is: %d",meter_per_second);
	return 0;
}
