//Question 5

#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
    str[0] = toupper(str[0]);
    printf("%s\n", str);
}

int main()
{
    char product[] = "Makeup";
    char username[] = "Krupanshi";

    capitalize(product);
    capitalize(username);
}

