//2. Loops + Arrays

#include<stdio.h>

int main()
{
    int a[7],i,total=0;
    float avg;

    for(i=0;i<7;i++)
    {
        printf("Enter screen time: ");
        scanf("%d",&a[i]);
        total=total+a[i];
    }

    avg=total/7.0;

    printf("Total Screen Time = %d\n",total);
    printf("Average Screen Time = %.2f\n",avg);

    if(avg>5)
        printf("Warning: Screen time is high!");
}
