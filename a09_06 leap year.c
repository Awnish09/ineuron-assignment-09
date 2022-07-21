/*leap year using switch case.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf("Enter a year to check whether its a leap year or not.\n");
    scanf("%d",&i);
    if(i%100)
    {
        if(i%4)
            i=2;
        else
            i=1;
    }
    else
    {
        if(i%400)
            i=2;
        else
            i=1;
    }
    switch(i)
    {
        case 1:
            printf("Its a leap year.");
            break;
        case 2:
            printf("its not a leap year.");
            break;
    }
    getch();
    return 0;
}
