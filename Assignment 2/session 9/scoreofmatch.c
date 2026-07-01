//Question 4

#include <stdio.h>

int main()
{
    int cricket[3][2] =
	{
        {180, 170},
        {200, 195},
        {165, 175}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        if(cricket[i][0] > cricket[i][1])
        {
        	printf("Match %d Highest Score = %d\n", i + 1, cricket[i][0]);
		}
        else
        {
        	printf("Match %d Highest Score = %d\n", i + 1, cricket[i][1]);
		}
	}
}
