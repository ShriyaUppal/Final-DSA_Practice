#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j=0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                isUnique = false;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique Elements of an array are: ";
    printUniqueValues(arr, n);
    return 0;
}