#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    string name; // declaring a variable known as name
    cout << "enter name: "; // telling the user to enter their name
    getline(cin, name); // entering the name that the user has put


    int age; // declaring a variable known as age
    cout << "enter age: "; // telling the user to enter their age
    cin >> age; // entering the age that the user has put

    cout << "hello " << name << " you are " << age << " years old" <<endl; // Printing out the whole information


/*
cout << pow(4, 2) << endl;
cout << sqrt(16) << endl;
cout << round(4.3) << endl;
cout << round(4.5) << endl;
cout << fmax(4.5, 4.6) << endl; prints out the highest number between the two
cout << fmin(4.5, 4.6); prints out the lowest number between the two
*/
    return 0;
}
