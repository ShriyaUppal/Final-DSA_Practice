#include<iostream>
using namespace std;

int square(int n)
{
    return (n*n);
}

int main()
{
    int num;
    cout<< "Enter the value of n: ";
    cin>>num;

    int res = square(num);
    cout<< "Square of " << num << " is: " << res <<endl; 

    return 0;
}