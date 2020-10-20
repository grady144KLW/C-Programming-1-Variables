#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
declaring two numbers 
*/
double num1; 
double num2;
printf("number: "); // asking the user for the first number
scanf("%lf", &num1); // scans the first number that the user puts
printf("number: "); // asks for the second number 
scanf("%lf", &num2); // scans for the second number

printf("Answer: %f", num1 + num2); // adds the numbers together 

    return 0;
}
