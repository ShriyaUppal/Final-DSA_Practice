#include<iostream>
using namespace std;

int findSmallestNumber(int arr[], int size)
{
    int smallestNum = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < smallestNum)
        {
            smallestNum = arr[i];
        }
    }
    return smallestNum;
}

int findlargestNumber(int arr[], int size)
{
    int largestNum = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > largestNum)
        {
            largestNum = arr[i];
        }
    }
    return largestNum;
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

    int smallest = findSmallestNumber(arr, n);
    cout<<"Smallest element of an array is: " << smallest <<endl;

    
    int largest = findlargestNumber(arr, n);
    cout<<"largest element of an array is: " << largest <<endl;

    return 0;
}