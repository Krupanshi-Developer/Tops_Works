//Question 3 Average Zomato Order Amount

#include <stdio.h>

int main()
{
    int orders[7] = {200, 150, 300, 250, 180, 220, 350};
    int i, sum = 0;
    float avg;

    for(i = 0; i < 7; i++)
    {
        sum += orders[i];
    }

    avg = sum / 7.0;

    printf("Average Amount = %.2f", avg);
}
