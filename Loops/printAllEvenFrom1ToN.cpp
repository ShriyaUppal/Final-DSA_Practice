#include<iostream>
using namespace std;

int main(){
    int N; 
    cout<< "Enter the value of N: ";
    cin>> N;
    for(int i=2; i<=N; i=i+2)
    {
        cout<< i << " ";
        // if(i%2 == 0)
        // {
        //     cout<< i << " ";
        // }
    }
    cout<<endl;
    return 0;
}