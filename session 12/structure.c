//Question 1

#include <stdio.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

int main()
{
    struct Playlist song = {"Mahiye Jinna Sohna", "Darshan Raval",300};

    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);
}



