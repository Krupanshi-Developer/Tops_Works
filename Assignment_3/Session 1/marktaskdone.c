//2. markTaskDone

#include<stdio.h>
#include<string.h>

char tasks[5][50];

void markTaskDone(int index)
{
    strcat(tasks[index], " - DONE");
}

int main()
{
	int i;
    strcpy(tasks[0], "Study");
    strcpy(tasks[1], "Project");
    strcpy(tasks[2], "Exercise");

    markTaskDone(1);

    for(i=0;i<3;i++)
    {
        printf("%s\n", tasks[i]);
    }
}
