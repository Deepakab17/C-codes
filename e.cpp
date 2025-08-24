#include <iostream>
using namespace std;
int main() {
int number;
cout<<"enter number";
cin>>number;
int rev=0; 
while (number!=0){
int digits= number%10;
rev=rev*10+digits;
number=number/10;

}
cout<<rev;

return 0; 
}