#include <iostream>
using namespace std;

int main(){
    //Approach 3: Using XOR operator
    int a = 8, b=5;
    cout<<"Before swapping numbers are: " << a << " " << b <<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"After swapping numbers are: " << a << " " << b <<endl; 
    return 0;
}

//Approach 1: Using third variable
//int temp = a;
//cout<< "Before swapping: " << a << " " << b <<endl;
//a = b;
//b = temp;
//cout<< "After swapping: " << a << " " << b <<endl;

//Approach 2: Using (+, -)
//int sum = a + b;
//a = sum - a;
//b = sum - b;
//cout<< "After swapping: " << a << " " << b <<endl;

