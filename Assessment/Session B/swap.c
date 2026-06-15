//3. Functions & Pointers

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
	printf("Enter value of x ");
	scanf("%d",&x);
	printf("Enter value of y ");
	scanf("%d",&y);
		
    swap(&x,&y);

    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
