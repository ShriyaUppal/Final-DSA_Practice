#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
vector<int> findAllOccurrences(vector<int> arr, int target)
{
    vector<int> freq;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] == target)
        {
            freq.push_back(i);
        }
    }
    return freq;
}

int main()
{
    int n, target;
    cout<<"Enter the number of elements of vector: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter the vector elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    cout<<"Enter the target elements: ";
    cin>>target;

    vector<int> res = findAllOccurrences(vec, target);
    printArray(res);
    return 0;
}