//Question 4


#include <stdio.h>

struct Bio
{
    char desc[100];
    int age;
};

struct InstaProfile
{
    char uname[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile user =
    {
        "krupanshi_24",1000,{"Student ", 20}
    };

    printf("Username: %s\n", user.uname);
    printf("Followers: %d\n", user.followers);
    printf("Bio: %s\n", user.bio.desc);
    printf("Age: %d\n", user.bio.age);
}
