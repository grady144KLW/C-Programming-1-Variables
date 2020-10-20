#include <iostream>

using namespace std;

int main()
{
int number1, number2, answer; // Declaring two numbers from the user and the answer
char operator_; // (+-*/)

cout << "first number brother: ";
cin >> number1; // telling the user to put their first number

cout << "which one? (+-*/): ";
cin >> operator_; // telling the user to display which operator they want to use

cout << "second number brother: ";
cin >> number2; // telling the user to put their second number

if (operator_ == '+'){
answer = number1+number2;
cout << "you're answer is: " << answer << endl;
} // if the operator is + then add the two numbers that the user has put

else if (operator_ == '-'){
answer = number1-number2;
cout << "you're answer is: " << answer << endl;
}// if the operator is - then take away the two numbers that the user has put

else if (operator_ == '*'){
answer = number1*number2;
cout << "you're answer is: " << answer << endl;
}// if the operator is * then multiply the two numbers that the user has put

else if (operator_ =='/'){
answer = number1/number2;
cout << "you're answer is: " << answer << endl;
}// if the operator is / then divide the two numbers that the user has put

else{

cout << "error brother";
}// if the user didn't put the right operator, then an error message will occur

return 0;
}
