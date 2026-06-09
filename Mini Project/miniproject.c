//Mini Project

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes[7];
    int i, choice;
    FILE *fp;

    while(1)
    {
        printf("\n1. Enter Minutes");
        printf("\n2. View Report");
        printf("\n3. Reset Data");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            fp = fopen("music_log.txt", "w");

            for(i = 0; i < 7; i++)
            {
                printf("Day %d Minutes: ", i + 1);
                scanf("%d", &minutes[i]);
                fprintf(fp, "%d\n", minutes[i]);
            }

            fclose(fp);
            printf("Data Saved Successfully\n");
        }

        else if(choice == 2)
        {
            int total = 0, max = 0, value;
            float avg;

            fp = fopen("music_log.txt", "r");

            for(i = 0; i < 7; i++)
            {
                fscanf(fp, "%d", &value);
                total += value;

                if(value > max)
                    max = value;
            }

            fclose(fp);

            avg = total / 7.0;

            printf("\nTotal Minutes = %d", total);
            printf("\nAverage Minutes = %.2f", avg);
            printf("\nHighest Minutes = %d\n", max);
        }

        else if(choice == 3)
        {
            fp = fopen("music_log.txt", "w");
            fclose(fp);

            printf("Data Reset Successfully\n");
        }

        else if(choice == 4)
        {
            break;
        }
    }
}
