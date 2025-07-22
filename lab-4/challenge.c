#include <stdio.h>
int main() 
{

char subjects[3][10] = {"cal", "phys", "compro"};
int scores[3];
char grades[3];
float numgrade[3];
float totalgpa = 0.0;


for (int i = 0; i <3; i++) 
{
printf("%s score: ", subjects[i]);
scanf("%d", &scores[i]);

if (scores[i] >= 80) 
{
grades[i] = 'A';
numgrade[i] = 4.0;
} 
else if (scores[i]>= 70) 
{
grades[i] = 'B';
numgrade[i] = 3.0;
} 
else if (scores[i]>= 60) 
{
grades[i] = 'C';
numgrade[i] = 2.0;
} 
else if (scores[i]>= 50) 
{
grades[i] = 'D';
numgrade[i] = 1.0;
} 
else 
{
grades[i] = 'F';
numgrade[i] = 0.0;
}

totalgpa += numgrade[i];
}
printf("%-10s%-10s%-10s%-10s\n", "subject", "score", "grade", "grade");
printf("--------------------------------------\n");

for (int i = 0; i< 3; i++) 
{
printf("%-10s%-10d%-10c%-10.1f\n", subjects[i], scores[i], grades[i], numgrade[i]);
}

printf("gpa: %.1f", totalgpa / 3.0);
return 0;
}
