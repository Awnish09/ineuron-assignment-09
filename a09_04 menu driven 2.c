/*menu driven program using switch*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i, l1, l2, l3;

    while(1)
    {
        printf("Option: 1. To check whether its an isosceles triangle.\n");
        printf("Option: 2. To check whether its a right angled triangle.\n");
        printf("Option: 3. To check whether its an equilateral triangle.\n");
        printf("Option: 4. Exit.\n");
        printf("Select your option- ");
        scanf("%d",&i);
        printf("\n");

        switch(i)
        {
            case 1:
                printf("Enter the lengths of the of all three sides.\n");
                scanf("%d %d %d",&l1, &l2, &l3);
                if(l1==l2 || l2==l3 || l3==l1)
                    printf("Its an isosceles triangle.\n\n");
                else
                    printf("Its not an isosceles triangle.\n\n");
                break;

            case 2:
                printf("Enter the lengths of the of all three sides.\n");
                scanf("%d %d %d",&l1, &l2, &l3);
                if(l1*l1+l2*l2==l3*l3 || l1*l1+l3*l3==l2*l2 || l2*l2+l3*l3==l1*l1)
                    printf("Its a right angled triangle.\n\n");
                else
                    printf("Its not a right angled triangle.\n\n");
                break;

            case 3:
                printf("Enter the lengths of the of all three sides.\n");
                scanf("%d %d %d",&l1, &l2, &l3);
                if(l1==l2 && l2==l3)
                    printf("Its an equilateral triangle.\n\n");
                else
                    printf("Its not an equilateral triangle.\n\n");
                break;

            case 4: exit(0);

            default:
                printf("You have entered invalid choice.\n\n");
            }
        getch();

    }
    return 0;

}
