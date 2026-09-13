#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;

    //Check if the vector is empty
    if(vec.empty())
    {
        cout<<"Vector is empty." <<endl;
    }

    vec.push_back(10);
    if(!vec.empty())
    {
        cout<<"Vector is not empty. First element: " << vec[0] <<endl;
    }
    return 0;
}