// Two sum Problem : -We have to find the two index whose sum is equal to given target
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target;
    cout << "Enter the Target" << endl;
    cin >> target;

    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int remaining = target - nums[i];
        if (mp.find(remaining) != mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[remaining]);
        }
        else
        {
            mp[nums[i]] = i;
        }
    }

    if(ans.size() == 0){
    ans.push_back(-1);
    ans.push_back(-1);
    }
    
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i] << " ";
    }

   

    return 0;
}