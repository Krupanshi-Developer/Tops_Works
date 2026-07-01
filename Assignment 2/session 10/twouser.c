//Question 2

#include <stdio.h>
#include <string.h>

int main()
{
    char uname[50], uname1[50];

    printf("Enter first username: ");
    scanf("%s", uname);

    printf("Enter second username: ");
    scanf("%s", uname1);

    if(strcmp(uname,uname1) == 0)
        printf("Both usernames are same.");
    else
        printf("Usernames are different.");
}



