#include<iostream>
using namespace std;

int decNum(int bin)
{
    int dec, pow=1;
    while(bin > 0)
    {
        int rem = bin%10;
        dec += rem * pow;
        bin /= 10;
        pow *= 2; 
    }
    return dec;
}

int main()
{
    int binNumber;
    cout<<"Enter the binary Number: ";
    cin>>binNumber;

    int dec = decNum(binNumber);
    cout<< "Equivalent Decimal of " << binNumber << " is: " << dec <<endl;
    return 0;
}