//Question 1

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Perfect\n");
    fprintf(fp, "Shape of You\n");
    fprintf(fp, "Believer\n");

    fclose(fp);
}
