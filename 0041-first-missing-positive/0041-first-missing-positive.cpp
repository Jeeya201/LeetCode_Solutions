class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int i=nums[0];
        int i=0;
        if(nums.size()<=1)
        {
            if(nums[0]==1)
            {
                return 2;
            }
            else
            {
                return 1;
            }
        }
        while(nums[i]<=0)
        {
            if(i>=nums.size()-1)
        {
            return 1;
        }
            i++;
        }
        
        
        int j=i;
        int k=nums[i];
        bool flag=false;
        while(j<nums.size())
        {

            if(flag==false && nums[j]!=1)
            {
                return 1;
            }
            flag=true;
            
            if(j>=1 && nums[j]== nums[j-1])
            {
                j++;
                continue;
            }
            
           if(nums[j]==k)
           {
               j++;
               k++;
           }
               else
               {
                   return k;
               }
        }
        return nums[j-1]+1;
    }
};