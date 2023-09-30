class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int curr:nums)
        {
            if(curr!=0)
            {
                nums[i]=curr;
                i++;
            }
        }
        while(i<=nums.size()-1)
        {
            nums[i]=0;
            i++;
        }
    }
};


// 0 ,1 , 0 ,3 , 12
// 1 ,1, 0 , 3 ,12
// 1 ,3 ,0, 3, 12
