#include<stdio.h>
int main()
{
    int a, b, c;     //Triangle side's lengths
    float s=0, area=0;
    printf("Enter Length of AB: ");
    scanf("%d", &a);
    printf("Enter Length of BC: ");
    scanf("%d", &b);
    printf("Enter Length of CA: ");
    scanf("%d", &c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is: %f", area);
    return 0;
}

