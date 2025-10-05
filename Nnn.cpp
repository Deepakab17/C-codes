#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int original = number;
    int sum = 0;
    int count = 0;
    int temp = number;

    // Step 1: count digits
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    // Step 2: calculate Armstrong sum
    temp = number;
    while (temp != 0) {
        int digits = temp % 10;
        sum = sum + pow(digits, count);
        temp = temp / 10;
    }

    // Step 3: check
    if (sum == original) {
        cout << "This is an Armstrong number";
    } else {
        cout << "This is not an Armstrong number";
    }

    return 0;
}
