#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
Declaring two numbers from the user and the answer
*/
double firstNum;
char operator_;
double secondNum;

printf("enter first number: ");
scanf("%lf", &firstNum); // telling the user to put their first number

printf("which operator: (+-*/) ");
scanf(" %c", &operator_); //telling the user to display which operator they want to use
// must use the space before adding the %c

printf("enter second number: ");
scanf("%lf", &secondNum); // telling the user to put their second number

if (operator_ == '+'){
printf("%f", firstNum + secondNum);
}// if the operator is + then add the two numbers that the user has put

else if (operator_ == '-'){
printf("%f", firstNum - secondNum);
}// if the operator is - then take away the two numbers that the user has put

else if (operator_ == '*'){
printf("%f", firstNum * secondNum);
}// if the operator is * then multiply the two numbers that the user has put

else if (operator_ == '/'){
printf("%f", firstNum / secondNum);
}// if the operator is / then divide the two numbers that the user has put

else {
printf("invalid operator");
}// if the user didn't put the right operator, then an error message will occur

    return 0;
}
