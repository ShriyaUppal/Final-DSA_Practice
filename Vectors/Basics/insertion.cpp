#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<char> alpha = {'a', 'b', 'c'};
    
    //insert element using push_back-adds element at the end of the vector
    alpha.push_back('d');

    //insert(pos, ele) inserts element at a specified position, time complexity is O(n) as we need to shift all the elements in order to insert element at a particular position.
    alpha.insert(alpha.begin() + 1, 'e');

    for(char ch:alpha)
    {
        cout<< ch << " ";
    }

    return 0;
}