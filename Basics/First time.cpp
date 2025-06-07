#include<iostream>
#include<string>
using namespace std;

int main() {
    /* Printing a line that says "Hello World!"
    and ito ay astig*/
    cout << "Hello World!\n";
    //Printing a line that says "I am learning C++"
    cout << "I am learning C++\n";
    int myNum = 100;
    string myText = "Mark Gevi";
    cout << myNum;
    cout << "\n";
    cout << myText;
    cout << "\n";
    cout << "I am " << myNum << " years old.";
    int x, y, z;
    x = y = z = 50;
    cout << "\n";
    cout << x + y + z;
    cout << "\n";
    // constant variable must always have an assigned value to prevent an error.
int a, b;
int sum;
cout << "Type a number: ";
cin >> a;
cout << "Type another number: ";
cin >> b;
sum = a + b;
cout << "Sum is: " << sum;

return 0;
}
