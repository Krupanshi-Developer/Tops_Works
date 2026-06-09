//Question 4 Print Only Songs Containing "love"

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char song[50];

    fp = fopen("playlist.txt", "r");

    while(fgets(song, sizeof(song), fp) != NULL)
    {
        if(strstr(song, "Love") || strstr(song, "love"))
        {
            printf("%s", song);
        }
    }

    fclose(fp);
}
