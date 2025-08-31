// #include<iostream>

// using namespace std;

// int main(){
//     int number1;
//     int number2;
//     cout<<"enter number 1\n"<<"enter number 2\n";
//     cin>> number1>>number2;
//    int hcf=0;
//     int sn=(number1<number2)? number1:number2;
//     if (number1==0 && number2==0)
//     {
//         cout<<"hcf can not be defined for (0,0)\n";
//         return 0;
//     }
//      if (number1 == 0) {
//         cout << "HCF is " << number2 << endl;
//         return 0;
//     }
//     if (number2 == 0) {
//         cout << "HCF is " << number1 << endl;
//         return 0;
//     }
    
//     for (int i=1; i<=sn;++i)
//     if(number1%i==0 && number2%i==0)
//     {
//         hcf=i;
//     }
//     cout<<"HCF is\n"<<hcf;
//       return 0;
//     }
#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter the number"<<endl;
cin>>number;
int rev=0;
int original=number;
while(number!=0)
{
int digits=number%10;
rev=rev*10+digits;
number=number/10;
}
cout<<rev<<" is"<<endl;
if (rev==original){
cout<<"pelindrome"<<endl;
}
else{
cout<<"not pelindrome";
}
return 0;
}
