#include <iostream>
#include <vector>

using namespace std;

int findLastIndex(vector<int> arr, int target)
{
    int lastIdx = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            lastIdx = i;
        }
    }
    return lastIdx;
}

int main()
{
    int n, target;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element: ";
    cin >> target;

    int lastIndex = findLastIndex(arr, target);
    if (lastIndex != -1)
    {
        cout << "Last occurrence is at index " << lastIndex << endl;
    }
    else
    {
        cout << "Target element not found" << endl;
    }

    return 0;
}