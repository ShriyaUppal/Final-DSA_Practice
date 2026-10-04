#include<iostream>
#include<vector>

using namespace std;

int countOccurrenceOfTarget(vector<int> arr, int target)
{
    int count = 0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, target;
    cout<<"Enter the number of elements of vector: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the vector elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target element: ";
    cin>>target;

    int freq = countOccurrenceOfTarget(arr, target);
    cout<<"Occurrence of " << target <<": " << freq <<endl;
    return 0;
}