class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            // for(int i=0;i<nums.size();i++)
            // {
            //     for(int j=i+1;j<nums.size();j++)
            //     {
            //         if(nums[i]+nums[j]==target)
            //         {
            //             return{i,j};
            //         }
            //     }
            // }
        // vector<int> a;
        // for(int i=0;i<size(nums);i++)
        // {
        //     for(int j=i+1;j<size(nums);j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             // return {i,j};
        //             a.push_back(i);
        //             a.push_back(j);
        //          }
        //     }
        // }
        //     return a;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            int more=target-val;
            if(mp.find(more)!=mp.end())
            {
                ans.push_back(mp[more]);
                ans.push_back(i);
            }
            mp[val]=i;
        }
        return ans;
    }
};