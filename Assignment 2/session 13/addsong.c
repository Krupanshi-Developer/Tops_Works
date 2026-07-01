//Question 3

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "Lovely\n");

    fclose(fp);
}
