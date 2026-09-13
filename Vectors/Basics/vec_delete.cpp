#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    
    //Deleting the last element i.e 50
    vec.pop_back();

    //Deleting element 40 using erase() method
    vec.erase(find(vec.begin(), vec.end(), 30)); 

    for(int i=0; i<vec.size(); i++)
    {
        cout<< vec[i] << " ";
    }
    return 0;
}