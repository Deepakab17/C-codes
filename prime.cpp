#include<iostream>

using namespace std;

int main(){
    int number1;
    int number2;
    cout<<"enter number 1\n"<<"enter number 2"<<endl;
    cin>>number1>>number2;
    int hn=(number1>number2)? number1:number2;
     if (number1 == 0 && number2 == 0) {
        cout << "LCM is undefined for (0, 0)." << endl;
        return 0;
    }

    if (number1 == 0 || number2 == 0) {
        cout << "LCM is 0" << endl;
        return 0;
    }
    for(int i=hn; ;i=i+hn)
    if(i% number1==0 && i% number2==0)
    {
        cout<<"lcm is\n"<<i;
        break;
    }
    return 0;

}