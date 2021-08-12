#include<stdio.h>
int main()
{
    int r;
    double area;
    double pi = 3.142;
    printf("Enter the radius of a circle:");
    scanf("%d", &r);
    area =(pi*pow(r, 2));
    printf("area is %.2f", area);
return 0;
}
