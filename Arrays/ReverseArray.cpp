#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

void reverseArr(int arr[], int size)
{
    int start=0; 
    int end=size-1; 
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}

int main()
{
    int n;
    cout<< "Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    reverseArr(arr, n);



}