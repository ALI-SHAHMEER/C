#include <stdio.h>
int main()
{
	int num[10],s1,i,s2,l1,l2;
    l1 = 0;
    l2 = 0;
    s1 = 100;
    s2 = 100;

    //Store 10 numbers in an array
    for (i = 0; i < 10; i++)
    {
		printf("Enter %d values: ",i);
	    scanf("%d", &num[i]);
	    if(num[i]>l1)
	    {
	    	l2 = l1;
	    	l1 = num[i];
		}
		else if(num[i]>l2 && num[i]<l1)
		{
			l2 = num[i];
		}
	}


	for(i = 0; i < 10; i++)
	{
		if(num[i]<s1)
		{
			s2 = s1;
			s1 = num[i];
		}
		else if(num[i]>s1 && num[i]<s2)
		{
			s2 = num[i];
		}
	}
	printf("First largest number:%d\n", l1);
	printf("Second largest number:%d\n", l2);
	printf("First smallest number:%d\n", s1);
	printf("Second smallest number:%d\n", s2);
	return 0;
}

