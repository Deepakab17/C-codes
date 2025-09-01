#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int number; 
    cout << "enter a number" << endl;
    cin >> number;

    int original = number; 
    int sum = 0; 
    int count = 0;

    int newnumber = number;
    while (newnumber != 0) {
        count++;
        newnumber = newnumber / 10;
    }

    
    newnumber = number;
    while (newnumber != 0) {
        int digits = newnumber % 10; 
        sum = sum + pow(digits, count);
        newnumber = newnumber / 10; 
    }

    if (sum == original) { 
        cout << "this is a armstrong number"; 
    } else { 
        cout << "this is not a armstrong number"; 
    }

    return 0;
}
