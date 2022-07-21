/*menu driven program using switch*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    float e, f;
    char i;

    while(c>0)
    {
        printf("Select the operation you want to perform.\n");
        printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n Option- ");
        scanf("%d",&i);
        printf("\n");

        switch(i)
        {
            case 1:
                printf("Enter two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("Sum of %d and %d is %d\n\n",a,b,a+b);
                break;

            case 2:
                printf("Enter two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("Difference between %d and %d is %d\n\n",a,b,a-b);
                break;

            case 3:
                printf("Enter two numbers.\n");
                scanf("%d %d",&a,&b);
                printf("Product of %d and %d is %d\n\n",a,b,a*b);
                break;

            case 4:
                printf("Enter two numbers.\n");
                scanf("%f %f",&e,&f);
                printf("Result of division is %f\n\n",e/f);
                break;

            case 5: exit(0);

            default:
                printf("You have entered invalid choice.\n\n");
            }
        getch();

    }
    return 0;

}
