class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         unordered_map<int,int> mp;
        int max_freq=0;
        for(auto i:nums)
        {
            mp[i]++;
            max_freq=max(max_freq,mp[i]);
        }
        int max_freq_ele=0;
        for(auto [k,v]:mp)
        {
            if(v==max_freq)
            {
                max_freq_ele++;
            }
        }
        int ans=max_freq*max_freq_ele;
        return ans;
        
        
    }
};