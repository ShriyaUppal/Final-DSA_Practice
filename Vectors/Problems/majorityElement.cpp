#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// ----BRUTE FORCE APPROACH----
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     for(int val:nums)
//     {
//         int freq = 0;
//         for(int ele:nums)
//         {
//             if(val == ele)
//             {
//                 freq++;
//             }
//         }
//         if(freq > n/2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

//----OPTIMISED APPROACH------
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     //Step 1: Sort array
//     sort(nums.begin(), nums.end());

//     //Step 2:
//     int freq = 1, ans = nums[0];
//     for(int i=1; i<n; i++)
//     {
//         if(nums[i] == nums[i-1])
//         {
//             freq++;
//         }
//         else{
//             freq=1;
//             ans = nums[i];
//         }
//         if(freq > n/2)
//         {
//             return ans;
//         }
//     }
//     return -1;
// }

//------Moore's Voting Algorithm------
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(freq == 0)
        {
            ans = nums[i];
        }
        else if(ans == nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};

    int res = majorityElement(arr);
    cout<< res <<endl;
    
    return 0;
}