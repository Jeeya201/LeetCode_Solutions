// Reference :
// https://www.youtube.com/watch?v=1z6dJ2qgnas
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        for(int i=1;i<nums.size();i++)   
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        int prod=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            prod=prod*nums[i+1];
            ans[i]=ans[i]*prod;
        }
     return ans;   
    }
};