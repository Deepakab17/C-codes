// #include <iostream>
// using namespace std;
// int main(){
// int a=10;
// if (++a);
// {
// cout<<++a;
// }
// cout<<++a;
// return 0;
// }
#include <iostream>
#include <cmath> // sqrt use karne ke liye
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 2) {
        cout << "It's not a prime number";
        return 0;
    }

    int i = 2;
    bool isPrime = true;  

    while (i <= sqrt(number)) {  
        if (number % i == 0) {  
            isPrime = false;  
            break;  
        }
        i++;
    }

    if (isPrime)
        cout << "It's a prime number";
    else
        cout << "It's not a prime number";

    return 0;
}

