#include<stdio.h>
int main()
{
    int number;
    int number2;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a number :");
    scanf("%d", &number2);

    if (number == number2)
    printf("Match");
else if (number != number2)
printf("Does not match");
return 0;

}