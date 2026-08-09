#include<iostream>
using namespace std;

int binNum(int dec)
{
    int binNumber, pow=1;
    while(dec > 0)
    {
        int rem = dec%2;
        binNumber += rem * pow;
        dec /= 2;
        pow *= 10; 
    } 
    return binNumber;
}

int main()
{
    int decNum;
    cout<< "Enter the decimal Number: ";
    cin>> decNum;

    int bin = binNum(decNum);
    cout<< " Equivalent Binary of " << decNum << " is: " << bin <<endl;
    return 0;
}