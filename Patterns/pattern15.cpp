#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        //spaces
        for(int spaces=0; spaces<n-i-1; spaces++)
        {
            cout<< " ";
        }
        cout<< "*";

        if(i != 0)
        {
            //spaces
            for(int j=0; j<2*i-1; j++)
            {
                cout<< " ";
            }
            cout<< "*";
        }
        cout<<endl;
    }

    //Bottom
    for(int i=0; i<n-1; i++)
    {
        //spaces
        for(int j=0; j<i+1; j++)
        {
            cout<< " ";
        }

        cout<< "*";
        if(i != n-2)
        {
            for(int j=0; j<2*(n-i)-5; j++)
            {
                cout<< " ";
            }
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;

}