#include<iostream>
#include<vector>

using namespace std;

//--------BRUTE FORCE APPROACH---------:
// vector<int> pairSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     vector<int> ans;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(nums[i]+nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }

//--------OPTIMISED APPROACH-------------
vector<int> pairSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int n=nums.size();

    int i=0, j=n-1;
    while(i<j)
    {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target)
        {
            j--;
        }
        else if(pairSum < target)
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}


int main()
{
    int target = 9;
    vector<int> vec = {2, 7, 11, 15};

    vector<int> result = pairSum(vec, target);
    for(int val:result)
    {
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}