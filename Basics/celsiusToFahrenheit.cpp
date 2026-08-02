#include<iostream>
using namespace std;

int main(){

    int celsius;
    cout<< "Enter the temperature in Celsius: ";
    cin>> celsius;
    double Fahrenheit = (celsius * 9.0/5) + 32;
    cout<< celsius << " is equivalent to: " << Fahrenheit <<endl;
    return 0;
}