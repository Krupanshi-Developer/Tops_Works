//Question 3 Add Two More Songs Using Append Mode

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "Lovely\n");

    fclose(fp);
}
