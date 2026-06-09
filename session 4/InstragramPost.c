//Question 4 InstragramPost

#include<stdio.h>

int main()
{
    int likes = 100;
    int comments = 350;
    int shares = 100;

    if(likes >= 1000 || (comments > 200 && shares >= 50))
    {
        printf("Post is Trending");
    }
    else
    {
        printf("Post is Not Trending");
    }
}
