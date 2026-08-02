#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    int original_num = n;
    int sum = 0;
    while(n != 0)
    {
        int remainder = n%10;
        int quotient = n/10;
        n = quotient;
        sum += remainder;
    }
    cout<<" Sum of " << original_num << " is: " << sum <<endl;
    return 0; 
}