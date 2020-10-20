#include <stdio.h>
#include <stdlib.h>

/*
scanf = allow user to enter in any info (can't get a whole line of text)
lf = scan for a double variable
c = scan for a character variable
s = scan for a string variable
char name[20] = how many characters the variable is able to store
fgets(name, 20) = collects a whole line of text (20 = specifies how many characters we want to be able to accept)
stdin = telling fgets where we want to get the information from
*/

int main()
{

char name[20];
printf("Enter name: ");
fgets(name, 20, stdin);
printf("Your name is %s\n", name);

int age;
printf("How old r u?: ");
scanf("%d", &age);
printf("and you are %d years old\n", age);

    return 0;
}
