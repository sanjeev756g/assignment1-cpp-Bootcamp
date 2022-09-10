// WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
#include<stdio.h>>
#include<conio.h>
int main()
{
    float area, radius;
    float pi=3.141;
    printf("Enter user number\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("\"Area of circle is %f having the radius %f\"",area,radius);
    return 0;
}
