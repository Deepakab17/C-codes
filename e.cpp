// #include <iostream>
// using namespace std;
// int main() {
// int number;
// cout<<"enter number";
// cin>>number;
// int rev=0; 
// while (number!=0){
// int digits= number%10;
// rev=rev*10+digits;
// number=number/10;

// }
// cout<<rev;

// return 0; 
// }
#include <iostream>
using namespace std;
int main(){
int number;
cout <<"enter a number\n";
cin>>number;
int original=number;
int sum=0;
while(number>0)
{
int digits =number%10;
sum=sum+digits*digits*digits;
number=number/10;
}
if(sum==original)
cout<<original<<" "<<"is armstrong";
else
cout<<original<<" "<<"is not a armstrong";
return 0;
}

