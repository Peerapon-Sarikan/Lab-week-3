#include<stdio.h>
int main()
{
    char name[100];
    int cal;
    int physics;
    int science;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your calculus score: ");
    scanf("%d",&cal);
    printf("Enter your physics score: ");
    scanf("%d",&physics);
    printf("Enter your science score: ");
    scanf("%d",&science);

    float avg = (cal + physics + science) / 3.0;
    if (avg >= 80)
        grade = 'A';
    else if (avg >= 70)
        grade = 'B';
    else if (avg >= 60)
        grade = 'C';
    else if (avg >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("%s, your average is %.2f. You got a %c grade.\n", name, avg, grade);


    return 0;
}