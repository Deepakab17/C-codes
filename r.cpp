# include <iostream>
using namespace std;
int main()
{
    int path;
    cout<<"enter your Source: 1. Bhopal\n";
    cin>>path;

    if(path==1)
    {
        cout<<"enter next path: 2. 3 .4.\n";
        cin>>path;
        if(path==2)
        {
            cout<<"enter next path 3. 4.\n";
            cin>>path;
            if(path==3)
            {
                cout<<"enter next path: 4.\n";
                cin>>path;
                if(path==4)
                {
                    cout<<"welcome to kolkata";
                }
                else{
                  cout<<  "sorry mate! wrong path";
                }
            }
            else if(path==4)
            {
cout<<"welcome to kolkata";
            }
        }
        else if (path==3)
        {
            cout<<"enter next path: 2. 4.\n";
            cin>>path;

            if(path==2)
            {
                cout<<"enter next path: 4.\n";
                cin>>path;
                if (path==4){

                    cout<<"welcome to kolkata";
                }

            }
            if(path==4)
            {
                cout<<"welcome to kolkata";
            }
            
            else{
                cout<<"invalid path";
            }

        }
        else if (path==4)
        {
            cout<<"welcome to kolkata";
        }
        
    
    }

    else{
        cout<<"no such path available\n";
    }
}

