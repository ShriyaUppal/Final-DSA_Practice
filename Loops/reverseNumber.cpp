#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int reversed_num=0;
    int original_num = n;
    while(n != 0){
        int digit = n%10;
        reversed_num = reversed_num*10 + digit;
        int remaining_num = n/10;
        n = remaining_num;
    }
    cout<<"Reverse of " << original_num <<" is: " << reversed_num;
    return 0;
}