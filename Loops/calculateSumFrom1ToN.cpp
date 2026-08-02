#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<< "Enter the value of N: ";
    cin>>N;
    int sum = 0;
    for(int i=1; i<=N; i++)
    {
        sum += i;
    }
    cout<< "Sum of " << 1 << " to " << N << " is: " << sum <<endl;
    return 0;
}