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

char name[20]; // declaring the name variable
printf("Enter name: "); // asking the user to enter their name
fgets(name, 20, stdin); // scans the name that the user has put
printf("Your name is %s\n", name); // prints the name that the user puts

int age; // declaring the age variable
printf("How old r u?: "); // asking the user for their age 
scanf("%d", &age); // scans the age that the user has put
printf("and you are %d years old\n", age); // prints the age that the user has put

    return 0;
}
