#include<iostream>
using namespace std;

bool isEven(int n){
        return (n%2 == 0);
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;

    int res = isEven(num);
    cout<< "Result is: " << res <<endl;
    return 0;
}