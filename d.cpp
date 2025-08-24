#include <iostream>
using namespace std;
int main() {
double number1;
double number2;
char op;
cout<<"enter first numbers"<<endl;
cout << "Enter operator (+, -, *, /): ";
cout<<"enter next numbers"<<endl;
cin>>number1>>op>>number2;
switch(op)
{case '+':
            cout << "Result = " << number1 + number2; 
            break;
        case '-':
            cout << "Result = " << number1 - number2; 
            break;
        case '*':
            cout << "Result = " << number1 * number2; 
            break;
        case '/':
 if(number2 != 0) 
                cout << "Result = " << number1 / number2; 
            else
                cout << "Error! Division by zero";
            break;
        default:
            cout << "Invalid operator!";
    }
return 0;
}