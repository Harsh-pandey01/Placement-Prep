// merge overlapping SubIntervals
// We are given to merge the intervals of the given questions or say Intervals

#include <bits/stdc++.h>
using namespace std;

void mergeIntervals(vector<vector<int>> nums)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i][0] > ans[ans.size()-1][1])
        {
            ans.push_back(nums[i]);
        }else{
            ans[ans.size()-1][1] = nums[i][1];
        }
    }

    for(int i = 0 ;i < ans.size() ; i++){
        for(int j =0 ; j < 2 ;j++){
            cout<< ans[i][j]<<" ";
        }
    }

}

int main()
{

    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    mergeIntervals(nums);

    return 0;
}