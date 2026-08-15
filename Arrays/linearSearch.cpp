#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    int result = linearSearch(arr, n, target);
    if(result != -1)
    {
        cout<< target << " is found at index " << result <<endl;
    }
    else{
        cout<< target << " is found at index " << -1 <<endl;
    }
    return 0;
}