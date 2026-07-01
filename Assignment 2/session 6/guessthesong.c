//Question 3

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];

    do
    {
        printf("Guess the song: ");
        scanf("%s",a);

        if(strcmp(a,"sajna")!=0)
        {
            printf("Wrong Guess!\n");
        }

    }while(strcmp(a,"sajna")!=0);

    printf("Correct Song!");
}
