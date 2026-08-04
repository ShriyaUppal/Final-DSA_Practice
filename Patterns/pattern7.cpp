/*
Print the following pattern.
1 
1 2 
1 2 3 
1 2 3 4 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int num = 1;
        for(int j=0; j<i+1; j++)
        {
            cout<< num <<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}