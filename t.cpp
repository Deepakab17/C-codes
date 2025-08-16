# include <iostream>
using namespace std;
int main(){


    // cout<<"hello";
    // goto jf;
    // cout<<"how are you";
    // jf:;
    // cout<<"tell me";
//   {  int i=1;
//     jb:;
    
//     if (i<=10)
//     {
//         cout<<3*i<<"\t";
//         ++i;
//         goto jb;

//     }
// int i=1;
    //   do
    // {
    //     cout<<3*i<<"\t";
    //     ++i;

    // }
    // while((i<=10));


    int number1 = 6;
    int number2 = 8;
  int hcf =0;
    for(int i=1; i<=number1; i++){
        if(number1%i == 0 && number2 %i == 0){
            hcf = i;
        }
    }
    cout<<hcf;
}
