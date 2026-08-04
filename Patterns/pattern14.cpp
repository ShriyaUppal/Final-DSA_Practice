#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        int count = 1;
        for(int spaces=0; spaces<n-i; spaces++)
        {
            cout<< "  ";
        }
        for(int j=0; j<i; j++)
        {
            cout<< count << " ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}