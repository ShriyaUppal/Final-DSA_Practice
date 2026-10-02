#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int> arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the number of elements of vector: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the vector elements: ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    bool res = isSorted(arr, n);
    if(res)
    {
        cout<< "Vector is sorted" <<endl;
    }
    else{
        cout<< "Vector is not sorted" <<endl;
    }
    return 0;
}