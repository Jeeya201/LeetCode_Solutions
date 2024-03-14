class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        int prefix_sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(auto ele:nums)
        {
            prefix_sum+=ele;
            if(mp.find(prefix_sum-goal)!=mp.end())
            {
                ans+=mp[prefix_sum-goal];
            }
            mp[prefix_sum]++;

        }
            return ans;

        
    }
};