//Question 4 Increase Followers by 100

#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        *(followers + i) += 100;
    }
}

int main()
{
    int followers[5] = {1000, 1200, 1500, 1800, 2000};
    int i;

    incrementFollowers(followers, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", followers[i]);
    }
}
