//Question 2 2D Array playlistRatings

#include <stdio.h>

int main()
{
    int play[3][5] = {
        {4, 5, 4, 5, 4},
        {5, 5, 4, 4, 5},
        {3, 4, 4, 3, 4}
    };

    int i;

    printf("Second Playlist Ratings:\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", play[1][i]);
    }
}
