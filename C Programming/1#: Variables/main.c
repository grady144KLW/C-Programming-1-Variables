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
char Name[] = "Matthew";
char gender[] = "he";
int age = 25;
int salary = 296;

printf("Brother %s\n", Name);
printf("is %d ", age);
printf("Years old\n");
printf("and %s works for £%dk\n", gender, salary);

    return 0;
}
