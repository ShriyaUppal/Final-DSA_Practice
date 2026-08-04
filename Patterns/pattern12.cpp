#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
       for(int space=0; space<i; space++)
       {
        cout<< "  ";
       }
       for(int num=0; num<n-i; num++)
       {
        cout<< i+1 << " ";
       }
       cout<<endl;
    }
    return 0;
}