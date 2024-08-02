// Calculate area of Square, Rectangle and circle
#include<stdio.h>

float SquareArea(float side);
float RectangleArea(float a, float b);
float CircleArea(float rad);

int main()
{
    float a = 5.0;
    float b = 10.0;
    printf("area is: %f", RectangleArea(a, b));
    return 0;
}

float SquareArea(float side)
{
    return side*side;
}

float rectangleArea(float a, float b)
{
    return a*b;
}

float CircleArea(float rad)
{
    return 3.14 * rad * rad;
}