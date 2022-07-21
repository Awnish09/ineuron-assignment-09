/*changing negative number into positive and positive number into negative using switch.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf("Enter any number.\n");
    scanf("%d",&i);

    switch(i)
    {
        default:
            printf("%d",i*-1);
            break;
    }
    getch();
    return 0;
}
