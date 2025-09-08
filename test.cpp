// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter a number"<<endl;
// cin>>number;
// int count=0;
// int sum=0;
// int original =number; 
// int nnumber=number; 
// while(nnumber!=0){ 
// count++;
// nnumber=nnumber/10; 
// }
// while(number!=0){
// int digits= number%10;
// int power=1;
// for(int i=1; i<=count; i++)
// {
// power= digits*power;
// }
// sum=sum+power;
// number=number/10; 
// }
// if (sum==original)
// {
// cout<<"its Armstrong number"<<endl;
// }
// else
// {
// cout<<"its not an Armstrong number"<<endl;

// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout <<"enter three digits number"<<endl;
// cin>>number;
// int hundreds= number/100;
// int tens =(number/10)%10;
// int ones=number%10;
// int sum= hundreds+tens+ones;
// cout<<"sum of digits are = "<<sum;
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int units;
int bill=0;
 cout<<"units consumed"<<endl;
cin>>units; 
if(units<=100)
{
bill=units*5;
}
else if (units>100 && units<=200) 
{
bill=(100*5)+(units-100)*4;
}
else{
bill=(100*5+100*4)+(units-200)*3;
}
if(units>300)
{
bill= bill+bill*.10; 
}
cout<<"total bill is = "<<bill;
 return 0; 
}