#include <iostream>
using namespace std;

int main() {
    char ch;
    char name[20];

    cout << "Enter a character: ";
    cin.get(ch);          // get()

    cout << "You entered: ";
    cout.put(ch);         // put()

    cin.ignore();         // ignore leftover newline

    cout << "\nEnter your name: ";
    cin.getline(name, 20); // getline()

    cout << "Name: " << name;
    return 0;
}
