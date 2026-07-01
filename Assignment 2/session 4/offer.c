//Question 3

#include<stdio.h>

int main()
{
	int age;
    float order;
	printf("Enter Your Age : ");
	scanf("%d",&age);
	printf("Enter Value : ");
	scanf("%f",&order);
    

    if(age>=18 && order>=500)
    {
        printf("Eligible for Offer");
    }
    else
    {
        printf("Not Eligible");
    }
}
