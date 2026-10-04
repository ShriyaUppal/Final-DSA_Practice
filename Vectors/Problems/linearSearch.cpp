#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> target;
    int result = linearSearch(arr, target);

    if (result != -1)
    {
        cout << "Target is found at index " << result << endl;
    }
    else
    {
        cout << "Target is not present in the vector" << endl;
    }
}