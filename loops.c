// Print the table of the number input by the user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
    {
     printf("The table of the number entered is: %d\n", n*i);
    }

    
}