//1. Conditional Logic Implementation

#include<stdio.h>

int main()
{
    int hours;

    printf("Enter study hours: ");
    scanf("%d",&hours);

    if(hours>=5)
    {
    	printf("Excellent Study!");	
	}
    else if(hours>=3)
    {
    	printf("Good Work!");	
	}
    else
    {
    	printf("Need More Practice!");
	}
}
