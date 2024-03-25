// Largest subArray with the zero sum

// Using the Same technique to store the pair of sum and index to get the ans

#include <bits/stdc++.h>
using namespace std;

int lSubarray(vector<int> nums)
{

    map<int, int> present;
    int sum, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == 0)
        {
            ans = max(ans, i + 1);
        }
        else
        {
            
            int rem = 0 - sum; 
		if(present.find(rem)!=present.end()){
			int len =i - present[rem];
			ans = max(ans,len);
		}
		if(present.find(sum)==present.end()){
			present[-sum] = i ;
		}

        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {9, -3, 3, -1, 6, -5};

    cout << "The Largest SubArray of sum equal to zero is " << lSubarray(nums);

    return 0;
}