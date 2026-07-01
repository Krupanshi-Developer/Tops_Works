//Question 2

#include <stdio.h>

struct FoodItem
{
    char item[50];
    float p;
    float r;
};

int main()
{
    int i;
    struct FoodItem food[3] =
    {
        {"Dosa", 150.0, 4.5},
        {"Panipuri", 40.0, 8.8},
        {"Manchuriyan",100.0, 4.7}
    };

    for(i = 0; i < 3; i++)
    {
        printf("\nItem: %s", food[i].item);
        printf("\nPrice: %.2f", food[i].p);
        printf("\nRating: %.1f\n", food[i].r);
    }
}

