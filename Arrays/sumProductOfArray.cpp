#include<iostream>
using namespace std;


int sumOfElements(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productOfElements(int arr[], int size)
{
    int product = 1;
    for(int i=0; i<size; i++)
    {
        product *= arr[i];
    }
    return product;
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
        cin>>arr[i];
    }

    int sumArr = sumOfElements(arr, n);
    int prodArr = productOfElements(arr, n);

    cout<< " Product of Array Elements are: " << prodArr <<endl;
    cout<< " Sum of Array Elements are: " << sumArr <<endl;

    return 0;
}