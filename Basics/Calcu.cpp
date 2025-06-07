#include<iostream>
using namespace std;

int main() {
    float num1, num2, ans;
    char let;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation to perform.\n";
    cout << "a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \nYour choice: ";
    cin >> let;

    if (let == 'A' || let == 'a') {
        ans = num1 + num2;
        if ((int)num1 == num1 && (int)num2 == num2) {
            cout << "The sum of the two numbers is " << (int)ans;
        } else {
        cout << "The sum of the two numbers is " << ans;
        }
    } else if (let == 'B' || let == 'b') {
        ans = num1 - num2;
        if ((int)num1 == num1 && (int)num2 == num2) {
            cout << "The difference of the two numbers is " << (int)ans;
        } else {
        cout << "The difference of the two numbers is " << ans;
        }
    } else if (let == 'C' || let == 'c') {
        ans = num1 * num2;
        if ((int)num1 == num1 && (int)num2 == num2) {
            cout << "The product of the two numbers is " << (int)ans;
        } else {
        cout << "The product of the two numbers is " << ans;
        }
    } else if (let == 'D' || let == 'd') {
        if (num2 != 0) {
        ans = num1 / num2;
        if ((int)num1 == num1 && (int)num2 == num2 && (int)ans == ans) {
            cout << "The division of the two numbers is " << (int)ans;
        } else {
        cout << "The division of the two numbers is " << ans;
        }
    } else {
    cout << "The division of zero is undefined.";
    }
    } else {
    cout << "Invalid input.";
    }



return 0;
}
