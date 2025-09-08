// # include <iostream>
// using namespace std;
// int main(){
//     int r;
//     int c;
//     for(r=1; r<=5;r++){
//     for (c=1; c<=5;c++)
//     if (c<=6-r)
// {
//     cout<<"*";

// }
// else{
//     cout<<" ";
// }
// cout<<endl;
// }
//     return 0;
// }
#include <iostream>
using namespace std; 
int main(){
int units;
double ;
cout<<"enter units"<<endl;;
cin>>units;

if (units<=50){
 =units*.50; 
}
else if (units>=51 && units<=150){
 =(50*.50)+(units-50)*.75; 
}
else{
 =(50*.50)+(100*.75)+(units-150)*1.20;
}
 cout<<"your total  is"<<endl<<;



return 0;
}