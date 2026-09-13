#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<char> ch = {'a', 'c', 'f', 'd', 'z'};
    cout<<"Size of the vector is: " << ch.size() <<endl;
    ch.push_back('c');
    cout<< ch.size() <<endl;
    cout<< ch.capacity() <<endl;
    
    return 0;
}