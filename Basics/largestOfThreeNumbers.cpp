#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout<< "Enter the number 1: ";
    cin>> n1;
    cout<< "Enter the number 2: ";
    cin>> n2;
    cout<< "Enter the number 3: ";
    cin>> n3;
    if(n1 > n2 && n1 > n3)
    {
        cout<< n1 << " is greater than " << n2 << " " << n3 <<endl;
    }
    else if(n2 > n1 && n2 > n3)
    {
        cout<< n2 << " is greater than " << n1 << " " << n3 <<endl;
    }
    else{
        cout<< n3 << " is greater than " << n1 << " " << n2 <<endl; 
    }

    return 0;
}