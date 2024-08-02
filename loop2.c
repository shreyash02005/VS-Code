// keep taking input from user until the user enters an odd number
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &n);
        printf("%d\n", n);  

        if(n%2!=0)
        {
            break;
        }
    }
    while(1); //Always True
    printf("End of loop");
    return 0;
}