#include <iostream>
using namespace std;

int main() {
    int num;
    string item[100] = {""}; // Initialize all elements to empty strings
    float price[100];

    cout << ">>>>>>      Welcome to Mark's Online Auction!     <<<<<<\n";
    cout << "--------------------------------------------------------\n";
    cout << "Input the items you will sell and their prices below.\n";
    cout << "How many items would you like to sell? ";
    cin >> num;

    // Input items and their prices
    for (int i = 0; i < num; i++) {
        cout << "Item #" << i + 1 << ": ";
        cin.ignore();
        getline(cin, item[i]);
        cout << "Price: Php ";
        cin >> price[i];
    }
    cout << endl;
    cout << "Week 1 Prices: \n";
    for (int i = 0; i < num; i++) {
    cout << item[i] << ": Php " << price[i];
    cout << endl;
    }
    cout << endl;
    // Calculate and display the price for each week
    for (int week = 2; week <= 6; week++) {
        cout << "Week " << week << " Prices: \n";
        for (int i = 0; i < num; i++) {
            float currentPrice = price[i];
            for (int j = 1; j < week; j++) {
                currentPrice -= currentPrice * 0.12;
            }
            cout << item[i] << ": Php ";
            if (currentPrice >= 10) {
                cout << currentPrice;
            } else {
                cout << " " << currentPrice;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
