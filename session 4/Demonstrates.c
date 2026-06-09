//Question 5 Demonstrates the difference between pre-increment and post-increment

#include<stdio.h>

int main()
{
    int followers = 2000;

    printf("Initial Value = %d\n", followers);

    printf("Pre Increment = %d\n", ++followers);

    printf("After Pre Increment = %d\n", followers);

    printf("Post Increment = %d\n", followers++);

    printf("After Post Increment = %d\n", followers);
}
