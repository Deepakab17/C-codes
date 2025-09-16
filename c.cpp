// #include <iostream>
// using namespace std;

// int main(){
//     int number=456;
//     int rev =0;
//     while (number!=0)
//     {
//         int digits= number%10;
//           rev= rev*10+digits;
//          number=number/10;
//     }
//     cout<<rev;
// }
// int number=121;
// int rev=0;
// int newnumber=number;
//   while (number!=0)
//      {
//          int digits= number%10;
//            rev= rev*10+digits;
//           number=number/10;
//      }
//         cout<<rev <<endl;
    
// if (newnumber==rev)
// {
//     cout<<"this is a pelindrome";
// }
// else{
//     cout<<"this is not a pelindrome";
// }
// int number=153;
// int original=number;
// int sum=0;
//   while (number!=0)
//      {
//          int digits= number%10;
//           number=number/10;
//           sum= sum+digits*digits*digits;
//      }
    
// if (sum==original)
// {
//     cout<<"this is a armstrong number";
// }
// else{
//     cout<<"this is not a armstrong number";


//  int number1;
 
//  cout << "Enter number: "; 
// cin >> number1;
//  for (int i = 1; i<= number1; i++) {   
 
// cout << i*123456789 <<endl; 
//  } 
// return 0;
//  }
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int sum=0;

for(int i=1; i<number; i++)
{
      if (number%i==0)
    {

        sum=sum+i;
    }
}
if(sum==number)
{
    cout<<"its a perfect number"<<endl;
}
else{
    cout<<"not a perfect number"<<endl;
}
return 0;
}