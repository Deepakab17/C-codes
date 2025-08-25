// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<" enter number\n";
// cin >>number;
// if(number%2==0){
// if (number%3==0)
// {
// cout<<number <<"is divisible by both 2,3";
// }
// else
// {
// cout<<number <<"is divisible by 2 but not3";
// }
// }
// else{
// cout<<number <<"is not divisible by 2 or 3";
// }

// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter a number";
cin>>number;
int rev=0;
int original=number;
for(  ; number>0 ; number=number/10)
{
int digits= number%10;
rev=rev*10+digits; 
}
if(rev==original)
cout<<"palindrome";
else
cout<<"not a palindrome";
return 0;
}
