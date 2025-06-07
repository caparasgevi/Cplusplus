#include<iostream>
using namespace std;

int main(){
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade <= 100 && grade >= 97){
        cout << "Your grade is 1.00";
    }
    else if (grade <= 96 && grade >= 94){
        cout << "Your grade is 1.25";
    }
    else if (grade <= 93 && grade >= 91){
        cout << "Your grade is 1.50";
    }
    else if (grade <= 90 && grade >= 88){
        cout << "Your grade is 1.75";
    }
    else if (grade <= 87 && grade >= 85){
        cout << "Your grade is 2.00";
    }
    else if ( grade <= 81 && grade >= 79){
        cout << "Your grade is 2.50";
    }
    else if (grade <= 78 && grade >= 76){
        cout << "Your grade is 2.75";
    }
    else if (grade == 75){
        printf("Your grade is 3.00");
    }
    else if (grade <= 74){
        cout << "Your grade is 5.00";
    }
    else {
        cout << "Invalid Input.";
    }

    return 0;
}
