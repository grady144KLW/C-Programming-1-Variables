/*
string = declares a variable with letters
bool = a variable that can be either true or false
int = declaring a whole number variable
char = represent one single character
double = specifies the exact value (0.0012)
float = specifies numbers with decimal places
*/

#include <iostream>

using namespace std;

int main()

{   string Name = "Obadiah, ";
    string What_they_got = "he got an ";
    int age = 35;
    char grade = ' A';
    float pi = 3.14;
    bool is_21_years_old = true;
    bool is_22_years_old = false;

    cout << Name << What_they_got << grade << endl; // endl prints the new line of the code
    cout << What_they_got << What_they_got.length(); // .length prints out how many letters there are

    return 0;
}
