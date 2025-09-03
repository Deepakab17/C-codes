// #include <iostream> 
// using namespace std;
// int main(){
// int number;
// cout<<"enter numbers"<<endl;
// cin>>number;
// if (number%2==0)
// {
// cout<<"this number is even";
// }
// else{
// cout<<"odd";
// }


// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// double total=0;
// for(int month=1; month<=12;month++){
// int unit;
// cout<<"enter total units"<<endl;
// cin>>unit;
// double bill;
// if (unit<=50){
// bill=unit*.50;
// }
// else if(unit>50 && unit<=150){
// bill =(50*.50)+(unit-50)*.75;
// }
// else{
// bill=(50*.50)+(100*.75)+(unit-150)*1.20;
// }
// if(bill<50){
// bill=50;
// }
// if(bill>300){
// bill=(bill*.20)+bill;
// } 
// cout<<"total bill for"<< month<<" is" <<" "<<endl<<bill; 
// total+=bill; 
// }
// cout<<"total yearly bill is"<<endl<<total;
 
// return 0;
// }


#include <iostream>
using namespace std;

 struct base {
char a;
char c; 
char b;
int i;      
int p;              

};
int main(){
   cout<< sizeof (base);
}
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter a number"<<endl;
// cin>>number;
// int i=number;
// int rev=0;
// while(number !=0)
// {
// int digits=number%10;
// rev= rev*10+digits;
// number= number/10;
// }
// if (i==rev)
// {
// cout<<"its a palindrome number";
// }
// else{
// cout<<"its not a palindrome";
// }
//    return 0;
//  } 