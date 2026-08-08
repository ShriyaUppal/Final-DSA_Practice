#include<iostream>
using namespace std;

bool isPrime(int num)
{
    if(num <=1)
    {
        return false;
    }
    for(int i=2; i*i<num; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    if(isPrime(n))
    {
        cout<< n << " is a Prime Number" <<endl;
    }
    else{
        cout<< n << " is not a Prime Number" <<endl;
    }

    return 0;
}