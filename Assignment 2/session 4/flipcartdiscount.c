//Question 2  

#include<stdio.h>

int main()
{
    float price=2000,disc=20;
    int member=1;
    float fp;

    fp=price-(price*disc/100);

    if(member)
    {
        fp=fp-(fp*5/100);
    }

    printf("Final Price = %.2f",fp);
}
