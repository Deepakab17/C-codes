#include <iostream>
using namespace std;
int main() {
int number;
cout<<"enter number";
cin>>number;
int rev=0;
int digits;  
for (number ; number>0; number= number/10){ 
digits=number%10;

rev=rev*10+digits;  

}
cout<<rev;


return 0; 
}