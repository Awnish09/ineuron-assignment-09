#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf("Enter the day number of week.\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            printf("Welcome to the start of new week, have a great start of week.");
            break;
        case 2:
            printf("Good Morning, have a great day ahead.");
            break;
        case 3:
            printf("Hello, this is a beautiful day.");
            break;
        case 4:
            printf("Hi, hope you have have the same energy as day one of the week.");
            break;
        case 5:
            printf("Good Morning, put little effort you can do it.");
            break;
        case 6:
            printf("Hello, enjoy the weekend.");
            break;
        case 7:
            printf("Hi, have a wonderful weekend.");
            break;
    }
    getch();
    return 0;
}
