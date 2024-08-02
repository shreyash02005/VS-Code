#include<stdio.h>
int main()
{
    int choice;
    printf("Calculate Area \n");
    printf("For Circle press 1 \n");
    printf("For rectangle press 2 \n");
    printf("For triangle press 3 \n");
    
    int l,b,h,r;

    printf("Enter your choice 1/2/3 \n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
    {
        printf("Enter radius of circle: \n");
        scanf("%d", &r);
        float pi=3.14, area;
        area = pi*r;
        printf("Area of Circle is: %f", area);
        break;
    } 

    case 2:
    {
        int area;
        printf("Enter the length of rectangle: \n");
        scanf("%d", &l);
        printf("enter the width: \n");
        scanf("%d", &b);
        area = 2*(l*b);
        printf("Area of rectangle is %d", area);
        break;
    }
    case 3:
    {
        int area;
        printf("Enter the height: \n");
        scanf("%d", &h);
        printf("enter the length of base: \n");
        scanf("%d", &h);
        area = 0.5*(b*h);
        printf("The area of triangle is %d", area);
        break;
    }
    default:
    printf("Invalid Choice \n");
    }
    
    return 0;


}