#include<iostream>
using namespace std;

int main() {
    int num, input[1000], total = 0;
    cout << "Enter number of integers: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        cout << "Integer #" << i << ": ";
        cin >> input[i];
        total += input[i];
    }
    cout << "Total: " << total;
return 0;
}
