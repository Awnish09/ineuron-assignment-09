/*Program to Convert even number into its upper nearest odd number Switch Statement..*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf("Enter an even number.\n");
    scanf("%d",&i);

    switch(i)
    {
        default:
            printf("%The upper nearest odd number of entered even number is %d",i+1);
    }
    getch();
    return 0;
}
