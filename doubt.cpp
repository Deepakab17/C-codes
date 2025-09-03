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
// #include <iostream>
// #include <cmath> // sqrt use karne ke liye
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number < 2) {
//         cout << "It's not a prime number";
//         return 0;
//     }

//     int i = 2;
//     bool isPrime = true;  

//     while (i <= sqrt(number)) {  
//         if (number % i == 0) {  
//             isPrime = false;  
//             break;  
//         }
//         i++;
//     }

//     if (isPrime)
//         cout << "It's a prime number";
//     else
//         cout << "It's not a prime number";

//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter a number"<<endl;
cin>>number;
int rev=0;
int original=number;
while(number!=0){
int digits=number%10;
rev=rev*10+digits;
number=number/10;
}
if (rev==original){
cout<<"its a palindrome number";
}
else{
cout<<"its not a palindrome number";
}

return 0;
}