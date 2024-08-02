#include<stdio.h>
void Hello();
void Goodbye();

int main()
{
    Hello();
    Goodbye();
    return 0;
}

void Hello()
{
    printf("Hello World! \n");
}

void Goodbye()
{
    printf("Goodbye World \n");
}