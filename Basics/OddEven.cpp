#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = num;

    do {
        if (i == 0) {
            cout << "The given integer is even.";
            return 0;
        } else if (i == 1) {
            cout << "The given integer is odd.";
            return 0;
        }
        i -= 2;
    } while (i >= 0);
    cout << "The given integer is a negative number.";

return 0;
}
