//Question 3

#include <stdio.h>

void IncreByValue(int follower)
{
    follower= follower+ 1000;
}

void IncreByRef(int *follower)
{
    *follower= *follower+ 1000;
}

int main()
{
    int follower= 5000;

    IncreByValue(follower);
    printf("After Value: %d\n", follower);

    IncreByRef(&followers);
    printf("After Reference: %d\n", follower);
}
