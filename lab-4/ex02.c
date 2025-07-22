#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >100)
    printf("%d is out of range", number);
else if (number < 1)
printf("%d is out of range", number);

    if (number %2 == 0)
    printf("%d is even", number);
else printf("%d is odd", number);
return 0;
}