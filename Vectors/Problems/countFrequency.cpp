#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<pair<int, int>> p)
{
    for(auto x:p)
    {
        cout<< x.first << " " << x.second <<endl;
    }
}

vector <pair<int, int>> countFreq(vector<int> nums, int n)
{
    vector<pair<int, int>> freq;
    for(int x:nums)
    {
        bool isAlreadyPresent = false;
        for(auto p:freq)
        {
            if(p.first == x)
            {
                isAlreadyPresent = true;
                break;
            }
        }
        if(!isAlreadyPresent)
        {
            int count=0;
            for(int y:nums)
            {
                if(x == y)
                {
                    count++;
                }
            }
            freq.push_back({x, count});
        }
    }
    return freq;
}

int main()
{
    int n;
    cout<< "Enter the size of an vector: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter vector elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    vector<pair<int, int>>p = countFreq(nums, n);
    printArray(p);

    return 0;
}