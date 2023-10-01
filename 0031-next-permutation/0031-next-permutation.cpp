class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int store=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            store=i;
            break;
        }
    }
        if(store==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[store])
            {
                swap(nums[i],nums[store]);
                break;
            }
        }
        
        reverse(nums.begin()+store+1,nums.end());
        
        
        
        
        
        
        
        
        
        
    }
};


















//  int index=-1;
//         for(int i=nums.size();i>=0;i--)
//         {
//             if(nums[i]>nums[i-1])
//             {
//                 index=i-1;
//                 break;
//             }
//         }
//         if(index==-1)
//         {
//             reverse(nums.begin(),nums.end());
//         }
//         for(int i=nums.size()-1;i>=0;i--)
//         {
//             if(nums[i]>nums[index])
//             {
//                 swap(nums[i],nums[index]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+index+1,nums.end());
        