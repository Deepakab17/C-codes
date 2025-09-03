#include <iostream>
 using namespace std;
 int main(){ 
int number; 
int count=0;
cout<<"enter number";
cin>>number;

for (int i=1; i<=number; i++)  {
if (number%i==0)
{
count++;

 
}
}
if(count==2)
{
cout<<"prime number";
}
else
{
cout<<"not prime";
}


return 0; }
