#include<iostream>
using namespace std;

void swapMinMax(int arr[], int n)
{
    int minIndex=0, maxIndex=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        else if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
}
int main()
{
    int n;
    cout<< "Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<< "Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    swapMinMax(arr, n);
    cout<< "After swapping maximum and minimum the array is: ";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}