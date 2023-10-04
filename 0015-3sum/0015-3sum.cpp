class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        // -2 -1 1 2
        for(int i=0;i<nums.size();i++)
        {
                        if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    vector<int>res={nums[i],nums[j],nums[k]};
                                ans.push_back(res);
                    j++;
                    k--;
                 while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k+1])k--;   
                }
                // while(j<k && nums[j]==nums[j-1])j++;
                // while(j<k && nums[k]==nums[k+1])k--;   
                
            }
        }
        return ans;
 
    }
};































//   vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//      for(int i=0;i<nums.size();i++)
//      {
//          if(i>0&&nums[i]==nums[i-1])continue;
//          int j=i+1;
//          int k=nums.size()-1;
//          while(j<k)
//          {
//              int sum=nums[i]+nums[j]+nums[k];
//              if(sum==0)
//              {
//                  vector<int> a={nums[i],nums[j],nums[k]};
//                  ans.push_back(a);
//                  j++;
//                  k--;
//              }
//              else if(sum<0)
//              {
//                  j++;
//              }
//              else
//              {
//                  k--;
//              }
//              while(j<k && nums[j]==nums[j-1])j++;
//              while(j<k && nums[k]==nums[k+1])k--;
//          }
//      }
//         return ans;