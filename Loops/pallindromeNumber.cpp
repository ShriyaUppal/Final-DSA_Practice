#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int original_number = number;
    int reversed_number = 0;
    while(number != 0)
    {
        int digit = number%10;
        reversed_number = reversed_number * 10 + digit;
        int rem = number/10;
        number = rem;
    }
    if(reversed_number == original_number)
        {
            cout<< original_number << " is a pallindrome number" <<endl;
        }
        else{
            cout<< original_number << " is not a pallindrome number" <<endl;
        }
    return 0;
}