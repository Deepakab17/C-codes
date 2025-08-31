// #include<iostream>

// using namespace std;

// int main(){
//     int number1;
//     int number2;
//     cout<<"enter number 1\n"<<"enter number 2"<<endl;
//     cin>>number1>>number2;
//     int hn=(number1>number2)? number1:number2;
//      if (number1 == 0 && number2 == 0) {
//         cout << "LCM is undefined for (0, 0)." << endl;
//         return 0;
//     }

//     if (number1 == 0 || number2 == 0) {
//         cout << "LCM is 0" << endl;
//         return 0;
//     }
//     for(int i=hn; ;i=i+hn)
//     if(i% number1==0 && i% number2==0)
//     {
//         cout<<"lcm is\n"<<i;
//         break;
//     }
//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter the number"<<endl;
// cin>>number;
// int count=0;
// for(int i=1; i<=number; i++){
// if(number%i==0 ){
// count++;
// }
// }
// if(count==2){
// cout<<"its a prime number"<<endl;
// }
// else{
// cout<<"its not a prime number"<<endl;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// int factorial=1;
// cout<<"enter a number"<<endl;
// cin>>number;
// for(int i= 1; i<=number; i++){
// factorial=factorial*i; 
// }
// cout<<factorial;
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter a number to reverse"<<endl;
cin>>number;
int rev=0;
int i=number;
for(; i!=0;){

int digits= i%10;
rev=rev*10+digits;
i= i/10;

}
cout<<rev;
return 0 ;
}
