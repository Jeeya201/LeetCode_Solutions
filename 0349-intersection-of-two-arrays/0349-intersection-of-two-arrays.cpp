class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int  i=0;
        int j=0;
        vector<int> ans;
        // int store=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                if(i>0 && nums1[i]==nums1[i-1] && nums2[j]==nums2[j-1])
                {
                    i++;
                    j++;
                    // store++;
                }
                else
                {
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
                // store=0;
            }
            else
            {
                j++;
                // store=0;
            }
        }
        return ans;
    }
};