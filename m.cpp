#include <iostream>
using namespace std;
int main(){
int number;
cout<<" enter number\n";
cin >>number;
if(number%2==0){
if (number%3==0)
{
cout<<number <<"is divisible by both 2,3";
}
else
{
cout<<number <<"is divisible by 2 but not3";
}
}
else{
cout<<number <<"is not divisible by 2 or 3";
}

return 0;
}
