# include <iostream>
using namespace std;
int main()
{
    int a=1;
     int s=17;
    int r=18;
   
// cout<<"hello, how are you?"<<endl;


// cout<<"my favourite movie is zombie"<<1<<endl;



// cout<<"the value of addition is="<<s+r<<endl;
// cout<<"the value of substraction is="<<s-r<<endl;
// cout<<"the value of multiplication is="<<s*r<<endl;
// cout<<"the value of division is="<<s/r<<endl;

// int English = 40;
// int Hindi = 60;
// int Maths = 70;
 
// int total = English+Hindi+Maths;
// int percentage = total*100/300;
// cout<<'Total percentage is="<<percentage;

// int a;
// cout<<"enter a number";
// cin>>a;
// cout<<a;
// }
int option;
cout<<"enter brand name: 1.Samsung 2. Motorola 3.Oneplus";
cin>>option;
if (option==1)
 {
    cout<<"enter variant : 1.8gb/128gb 2.12gb/256 ";
    cin>>option;
    if (option==1)
   {
cout<<"enter size: 1.6inchs 2.7inchs";
    cin>>option;
    if(option==1)
    {cout<<"price is rs 49999/- only";
    }
    else if (option==2)
    {
cout<<"price is rs 59999/-only";
    }
    else{
        cout<<"invalid request";
    }
   }


    else if (option==2)
 
 {cout<<"enter size: 1.6inchs 2.7inchs \n";
cin>>option;
if(option==1)
{
    cout<<"Price is rs 38999/- only\n";
}
else if (option==2)
    {
cout<<"price is rs 48999/-only\n";
    }
    else{
        cout<<"invalid request\n";
    }
}
 }
 else if (option==2)
 {
    cout<<"enter variant : 1.8gb/128gb 2.12gb/256gb ";
    cin>>option;
    if (option==1)
   {
cout<<"enter size: 1.6inchs 2.7inchs";
    cin>>option;
    if(option==1)
    {cout<<"price is rs 59999/- only";
    }
    else if (option==2)
    {
cout<<"price is rs 79999/-only";
    }
    else{
        cout<<"invalid request";
    }
   }


    else if (option==2)
 
 {cout<<"enter size: 1.6inchs 2.7inchs";
cin>>option;
if(option==1)
{
    cout<<"Price is rs 45855/- only";
}
else if (option==2)
    {
cout<<"price is rs 48999/-only";
    }
    else{
        cout<<"invalid request";
    }

 }}
 else if (option==3)
 {
    cout<<"enter variant : 1.8gb/128gb 2.12gb/256gb ";
    cin>>option;
    if (option==1)
   {
cout<<"enter size: 1.6inchs 2.7inchs";
    cin>>option;
    if(option==1)
    {cout<<"price is rs 51000/- only";
    }
    else if (option==2)
    {
cout<<"price is rs 53999/-only";
    }
    else{
        cout<<"invalid request";
    }
   }


    else if (option==2)
 
 {cout<<"enter size: 1.6inchs 2.7inchs";
cin>>option;
if(option==1)
{
    cout<<"Price is rs 49000/- only";
}
else if (option==2)
    {
cout<<"price is rs 52000/-only";
    }
    else{
        cout<<"invalid request";
    }

 }


else{
    cout<<"invalid request ! please try again";
}




}}
 

