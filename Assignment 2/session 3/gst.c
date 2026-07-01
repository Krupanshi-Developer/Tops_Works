//Question 2

#include<stdio.h>

int main()
{
    const float GST=18.0;
    float p=500;
    float fp;

    fp=p+(p*GST/100);

    printf("Final Price = %.2f",fp);
}
