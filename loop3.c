// Keep taking input from user until user enters a number which is a multiple of 7
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%7==0)
        {
            break;
        }
    } while (1);
    printf("end of loop");
    return 0;
    
}