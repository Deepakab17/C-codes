// #include <iostream>
// using namespace std;
// int main() {
// int number;
// cout<<"enter a number\n";
// cin>>number;
// int x=0;
// int y=1;
// int z=0;
// int count=1;
// for (count =1 ; count<=number; count=count+1)
// {
// cout<<z;
// x=y;
// y=z;
// z=x+y;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
// int number;
// cout<<"enter a number\n";
// cin>>number;
// int x=0;
// int y=1;
// int z=0;
// int count=1;
// while (count<=number)
// {
// cout<<z;
// x=y;
// y=z;
// z=x+y;
// count=count+1;
// }
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
int number;
cout<<"enter number\n";
cin>>number;

for(int i=2; i<=number; i++)
{
    int count=0;
for( int d=1; d<=i;++d)
{
if(i%d==0)
count++;
}
if (count ==2)
cout<<i<<" "<<"is a prime number\n";}
return 0;
}