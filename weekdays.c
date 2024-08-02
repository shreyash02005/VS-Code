#include<stdio.h>
int main()
{
    int choice;
    printf("enter a number: \n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            printf("Today is Sunday \n");
            break;
        }

        case 2:
        {
            printf("Today is Monday \n");
            break;
        }

        case 3:
        {
            printf("Today is Tuesday");
            break;
        }

        case 4:
        {
            printf("Today is wednesday");
            break;
        }

        case 5:
        {
            printf("Today is Thursday");
            break;
        }

        case 6:
        {
            printf("Today is Friday");
            break;
        }

        case 7:
        {
            printf("Today is Saturday");
            break;
        }

        default:
        printf("Invalid Input");

    }
    return 0;
}