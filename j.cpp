#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter maximum  terms";
cin>>number;
int a=0;
int b=1;
int c=0;
while(c<=number)
{
cout<<c;
a=b;
b=c;
c=a+b;
}
return 0;
}

