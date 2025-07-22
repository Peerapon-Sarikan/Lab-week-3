#include<stdio.h>
int main()
{
    int height;
    int base;
    float pi = 3.141592f;
    printf("Enter cone height: ");
    scanf("%d",&height);
    printf("Enter cone base radius: ");
    scanf("%d",&base);
    float volume = (pi *(base*base)*height) / 3;
    printf("Cone volume = %f", volume);
    if (volume > 260)
    printf("\nThis cone is perfect for Supun project");
else if (volume < 260)
printf("\nThis cone is not fit for this project");
    
    return 0;

}