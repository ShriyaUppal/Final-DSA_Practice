#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int count=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j>=0; j--)
        {
            cout<< count << " ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}