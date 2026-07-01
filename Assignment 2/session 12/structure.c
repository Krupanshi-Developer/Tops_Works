//Question 1

#include <stdio.h>

struct Playlist
{
    char title[50];
    char art[50];
    int dur;
};

int main()
{
    struct Playlist song = {"Mahiye Jinna Sohna", "Darshan Raval",300};

    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.art);
    printf("Duration: %d seconds\n", song.dur);
}



