// #include <iostream>
// using namespace std;
// int main() {
// double number1;
// double number2;
// char op;
// cout<<"enter first numbers"<<endl;
// cout << "Enter operator (+, -, *, /): ";
// cout<<"enter next numbers"<<endl;
// cin>>number1>>op>>number2;
// switch(op)
// {case '+':
//             cout << "Result = " << number1 + number2; 
//             break;
//         case '-':
//             cout << "Result = " << number1 - number2; 
//             break;
//         case '*':
//             cout << "Result = " << number1 * number2; 
//             break;
//         case '/':
//  if(number2 != 0) 
//                 cout << "Result = " << number1 / number2; 
//             else
//                 cout << "Error! Division by zero";
//             break;
//         default:
//             cout << "Invalid operator!";
//     }
// return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "enter a number" << endl;
    cin >> number;

    int sum=0;
for(int i=1; i<number; i++) {
if(number%i==0)
{
sum=sum+i;
}
}
if (sum==number)
{
cout<<"its a perfect number";
}
else{
cout<<"not perfect";
}

    return 0; 
}