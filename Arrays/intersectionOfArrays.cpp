#include<bits/stdc++.h>
using namespace std;

void intersectionOfArrays(int arr1[], int arr2[], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        bool alreadyPrinted = false;
        for(int k=0; k<i; k++)
        {
            if(arr1[i] == arr1[k])
            {
                alreadyPrinted = true;
            }
        }
        for(int j=0; j<m; j++)
        {
            if(arr1[i] == arr2[j] && !alreadyPrinted){
                cout<< arr1[i] << " ";
            }
        }
    }
}

int main()
{
    int n1, n2;
    cout<<"Enter the size of array 1: ";
    cin>>n1;
    cout<<"Enter the size of array 1: ";
    cin>>n2;

    int arr1[n1], arr2[n2];
    cout<<"Enter Array1 elements: ";
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter Array2 elements: ";
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }

    intersectionOfArrays(arr1, arr2, n1, n2);
    return 0;
}