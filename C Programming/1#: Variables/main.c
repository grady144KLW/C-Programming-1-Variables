#include <stdio.h>
#include <stdlib.h>

/*
%s = putting another string inside of print
%d = putting numbers inside of print
%f = putting decimal numbers inside of print
%c = putting single character (char)
int = whole number
double = decimal numbers
char = '' = creates only one letter
char[] = "" = creates a string
const = constant variable (can't change the values)
*/

int main()
{
char Name[] = "Matthew"; // declaring an name called matthew
char gender[] = "he"; // declaring the gender
int age = 25; // declaring the age
int salary = 296; // declaring the salary

printf("Brother %s\n", Name); //prints matthew
printf("is %d ", age); // prints their age
printf("Years old\n");
printf("and %s works for £%dk\n", gender, salary); // prints their salary

    return 0;
}
