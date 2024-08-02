#include<stdio.h>
void indian();
void french();

int main()
{
    char nationality;
    printf("Enter natinality: \n");
    scanf("%c", &nationality);

    if(nationality=='i')
    {
        indian();
    }
    else
    {
        french();
    }
}

void indian()
{
    printf("Namaste!!");
}

void french()
{
    printf("Bonjour!!");
}