// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter a number"<<endl;
// cin>>number;
// int sum=0;
// while(number!=0){
// int digits= number%10;
// sum=sum+digits;
// number=number/10;

// }
// cout <<"total value of the number is"<<endl<<sum;
// return 0;
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
// string str;
// cout<<"enter a name"<< endl;
// cin>>str;
// string reverse="";
// for (int i = str.length() - 1; i >= 0; i--) {
//         reverse = reverse + str[i];   
//     }
// cout<<reverse;

// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter a number"<< endl;
cin>>number;
int reverse=0;
int original=number; 
while(number!=0)
{
int digits=number%10;
reverse=reverse*10+digits;
number=number/10;
}
if(reverse==original){
cout<<"its a palindrome number"; 
}
else{
cout<<"its not a palindrome number";
} 

return 0;
}