#include<iostream>
using namespace std;

int maxNum(int n1, int n2)
{
    return n1 < n2 ? n2 : n1;
}

int maxOf3(int a, int b, int c)
{
    int maxNumber =  maxNum(b, c);
    return maxNum(a, maxNumber);
}

int main()
{
    int num1, num2, num3;
    cout<<"Enter the number 1 number 2 and number 3 respectively: ";
    cin>> num1 >> num2 >> num3;

    int maximum = maxOf3(num1, num2, num3);
    cout<< "Maximum number is: " << maximum <<endl;
    return 0;
}