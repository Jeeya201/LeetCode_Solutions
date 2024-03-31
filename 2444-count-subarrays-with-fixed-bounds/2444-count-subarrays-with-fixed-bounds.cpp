

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int bad_i=-1;
        int mini=-1;
        int maxi=-1;
        long long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<minK || nums[i]>maxK)
            {
                bad_i=i;
            }
            if(nums[i]==minK) 
            {
                mini=i;
            }
            if(nums[i]==maxK)
            {
                maxi=i;
            }
            ans+=max(0,min(mini,maxi)-bad_i);
        }
        return ans;
        
    }
};