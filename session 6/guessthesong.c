//Question 3

#include<stdio.h>
#include<string.h>

int main()
{
    char guess[20];

    do
    {
        printf("Guess the song: ");
        scanf("%s",guess);

        if(strcmp(guess,"sajna")!=0)
        {
            printf("Wrong Guess!\n");
        }

    }while(strcmp(guess,"sajna")!=0);

    printf("Correct Song!");
}
