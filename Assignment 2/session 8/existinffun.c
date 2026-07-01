//Question 5

#include <stdio.h>

void capitalize(char str[])
{
    str[0] = toupper(str[0]);
    printf("%s\n", str);
}

int main()
{
    char p[] = "Makeup";
    char uname[] = "Krupanshi";

    capitalize(p);
    capitalize(uname);
}

