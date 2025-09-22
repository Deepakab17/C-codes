#include <iostream>
using namespace std;

void Prime(int num) { 
    int count = 0;

    for (int i = 1; i <= num; i++) { 
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "prime number" << endl;
    } else {
        cout << "not a prime number" << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Prime(number); 

    return 0;
}
