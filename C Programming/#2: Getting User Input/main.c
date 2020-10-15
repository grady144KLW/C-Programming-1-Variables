#include <stdio.h>
#include <stdlib.h>

/*
scanf = allow user to enter in any info (can't get a whole line of text)
lf = scan for a double variable
c = scan for a character variable
s = scan for a string variable
char name[20] = how many characters the variable is able to store
fgets(name, 20) = collects a whole line of text (20 = specifies how many characters we want to be able to accept)
stdin = telling fgets where we want to get the information fromfv
*/

int main()
{
int age;
printf("How old r u?: ");
scanf("%d", &age);
printf("u are %d years old\n", age);

double gpa;
printf("Enter gpa: ");
scanf("%lf", &gpa);
printf("ur gpa is %f\n", gpa);

char grade;
printf("Enter grade:\n ");
scanf("%c", &grade);
printf("ur grade is %c", grade);

char name[20];
printf("Enter name: ");
fgets(name, 20, stdin);
printf("ur name is %s\n", name);

    return 0;
}
