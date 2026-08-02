#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;
    int original_num = n;
    int digit_count = 0;
    while(n != 0)
    {
        int digit = n/10;
        digit_count++;
        n = digit;
    }
    cout<< digit_count;
    return 0;
}