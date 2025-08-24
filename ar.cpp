#include <iostream>
using namespace std;
int main(){
int number;
int sum=0;

cout<<"enter a number";
cin>>number;
int original=number;
while(number>0){
int digits=number%10;
 sum=sum+digits*digits*digits;
number=number/10;
}
if (sum==original)
cout<<"its a armstrong";

else
cout<<"not a armstrong";

return 0;
}
