# include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    for (r=1; r<=5; ++r)
    {for(c=1;c<=5;++c)

        if(c<=r)
        {
            cout<<"*";
        }
        else{

            cout<<" ";
        }
    
    
cout<<endl;
    }

    return 0;
}