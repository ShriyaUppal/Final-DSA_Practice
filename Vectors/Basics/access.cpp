#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40};

    //Accessing elements using [] - gives direct access without bounds checking.
    cout<<"Element at index 2 using []: " << vec[2] <<endl;

    //Accessing elements using .at() - gives access with bounds checking.
    cout<<"Element at index 3 using .at(): " << vec.at(3) <<endl;

    //out of range exception
    cout<< vec[10] <<endl;
    cout<< vec.at(10) <<endl;

    return 0;
}