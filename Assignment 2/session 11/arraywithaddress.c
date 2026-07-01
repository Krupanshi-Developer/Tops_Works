//Question 3

#include <stdio.h>

int main()
{
    int order[5] = {120, 250, 180, 300, 220};
    int *ptr = order;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Amount = %d \n Address = %p\n", *ptr, ptr);
        ptr++;
    }
}
