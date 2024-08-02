#include<stdio.h>
int main()
{
    int Marks[5];
    printf("Enter marks of Physics: ");
    scanf("%d", &Marks[1]);
    
    printf("Enter maths Marks: ");
    scanf("%d", &Marks[2]);

    printf("Enter chemistry marks: ");
    scanf("%d", &Marks[3]);

    printf("%d, %d, %d", Marks[1], Marks[2], Marks[3]);
    return 0;
}