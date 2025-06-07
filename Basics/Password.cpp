#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char username[20], password[20];
    char usernameInput[20], passwordInput[20];
    int passwordChecker = 0, attempts = 0;

    cout << "Create your username: ";
    cin >> username;
    cout << "Create your password: ";
    cin >> password;

    cout << "Login your Account.\n";
    while (!passwordChecker && attempts < 3) {
    cout << "Enter your username: ";
    cin >> usernameInput;
    cout << "Enter your password: ";
    cin >> passwordInput;
    if  (strcmp(usernameInput, username) == 0 && strcmp(passwordInput, password) == 0) {
        passwordChecker = 1;
        cout << "Login Successful. Thank you for using our program.";
    } else {
    attempts++;
    if (attempts < 3) {
       cout << "Incorrect username or password. Please try again.\n";
       cout << "You have " << 3 - attempts << " attempts remaining.\n" ;
    } else {
    cout << "You have reached the maximum attempts allowed. Now exiting the program.";
    }
    }
    }

return 0;
}
