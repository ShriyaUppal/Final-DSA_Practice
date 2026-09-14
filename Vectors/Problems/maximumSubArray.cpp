#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int nums[7] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    for(int start=0; start<7; start++)
    {
        int currSum=0;
        for(int end=start; end<7; end++)
        {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"max subarray sum is: " << maxSum <<endl;
    return 0;
}