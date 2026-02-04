#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, largest;
    //User Input
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Enter your third number: ";
    cin >> num3;
    //Computes largest numbers
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }
    // largest Number
    cout << "The largest number is: " << largest << endl;
    return 0;
}