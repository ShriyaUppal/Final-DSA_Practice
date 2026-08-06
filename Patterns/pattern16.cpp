#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        //triangle 
        for(int j=0; j<i+1; j++)
        {
            cout<< " * ";
        }
        //spaces
        for(int space=0; space<2*(n-1-i); space++)
        { 
            cout<< "   ";
        }


        //triangle
        for(int k=0; k<i+1; k++)
        {
            cout<< " * ";
        }
         cout<<endl;
    }

    for(int i=n; i>0; i--)
    {
        //triangle 
        for(int j=0; j<i; j++)
        {
            cout<< " * ";
        }
        //spaces
        for(int space=0; space<2*(n-i); space++)
        { 
            cout<< "   ";
        }


        //triangle
        for(int k=1; k<i+1; k++)
        {
            cout<< " * ";
        }
         cout<<endl;
    }
    return 0;
}