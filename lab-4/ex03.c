#include <stdio.h>
int main() 
{
    int number;
    const char *range_status[] = {"out of range", ""};
    const char *parity[] = {"even", "odd"};
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d is %s\n", number,
           (number >= 1 && number <= 100)
              ?  parity[number % 2]
               : range_status[0]);

    return 0;
}


