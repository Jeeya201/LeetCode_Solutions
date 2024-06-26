// Refer : https://www.youtube.com/watch?v=Fdmz2rNNfGQ

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        int j=0;
        int i=0;
        int ans=0;
        while(j<nums.size())
        {
            mp[nums[j]]++; 
            while(i<=j && mp[nums[j]]>k)
            {
                mp[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};