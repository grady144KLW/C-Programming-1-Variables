#include <iostream>
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



    return 0;
}
