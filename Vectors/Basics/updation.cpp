#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec = {10, 20, 30};
    cout<<"Original value at index 1 is: " << vec[1] <<endl;

    vec[1] = 50;
    cout<<"Value at index 1 after updation is: " <<vec[1] <<endl;
    return 0;
}