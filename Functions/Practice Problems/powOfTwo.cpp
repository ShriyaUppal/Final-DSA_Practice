#include<iostream>
using namespace std;

void powOfTwo(int num)
{
    if(num>0 && (num & (num-1)) == 0)
    {
        cout<< num << " is a power of 2";
    }
    else{
        cout<< num << " is not a power of 2";
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    powOfTwo(n);
    return 0;
}