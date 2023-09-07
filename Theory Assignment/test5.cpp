#include<stdio.h>
int main()
{
	int i,arr[5]={1,2,3,4,5};
	for(i=0;i<6;i++)
	{
		printf("%d at %d: %c\n",i,arr[i],arr[i]);
	}
	return 0;
}
