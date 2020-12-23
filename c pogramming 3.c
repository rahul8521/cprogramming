#include<stdio.h>
int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", & breadth);

    area = length * breadth;
    perimeter = 2 * (length+breadth);

    printf("The area of rectangle: %f\n", area);
    printf("The perimeter of rectangle: %f\n", perimeter);

    if (area>perimeter)
        printf("Area of rectangle is greater than it's perimeter");
    else
        printf("Perimeter of rectangle is greater than it's area");
}
