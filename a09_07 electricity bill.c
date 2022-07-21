/*.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    float i;
    printf("Enter how many units of electricity was used.\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 ... 50:
            i=a*0.5;
            i+=i*20/100;
            printf("Total electricity bill is %f",i);
            break;
        case 51 ... 150:
            i=a*0.75;
            i+=i*20/100;
            printf("Total electricity bill is %f",i);
            break;
        case 151 ... 250:
            i=a*1.2;
            i+=i*20/100;
            printf("Total electricity bill is %f",i);
            break;
        default :
            i=a*1.5;
            i+=i*20/100;
            printf("Total electricity bill is %f",i);
    }
    getch();
    return 0;
}
