//4. File Handling

#include<stdio.h>

int main()
{
    FILE *fp;
    char goal[50];

    fp=fopen("goal.txt","w");
    fprintf(fp,"Study 1 Hours Daily");
    fclose(fp);

    fp=fopen("goal.txt","r");
    fgets(goal,50,fp);

    printf("Goal: %s",goal);

    fclose(fp);
}
