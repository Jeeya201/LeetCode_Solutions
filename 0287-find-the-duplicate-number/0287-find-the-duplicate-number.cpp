class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=0;
        while(fast!=slow)
        {
            fast=nums[fast];
            slow=nums[slow];
        }
        return fast;
        //NOTE do tghis by the fast slow approach , cause that approach is also asked in INTERVIEWS!
       
    }
};





//  public static int findDuplicate_set(int[] nums) {
//         Set<Integer> set = new HashSet<>();
//         int len = nums.length;
//         for (int i = 0; i < len; i++) {
//             if (!set.add(nums[i])) {
//                 return nums[i];
//             }
//         }

//         return len;
//     }










// if (nums.size() > 1)
// 	{
// 		int slow = nums[0];
// 		int fast = nums[nums[0]];
// 		while (slow != fast)
// 		{
// 			slow = nums[slow];
// 			fast = nums[nums[fast]];
// 		}

// 		fast = 0;
// 		while (fast != slow)
// 		{
// 			fast = nums[fast];
// 			slow = nums[slow];
// 		}
// 		return slow;
// 	}
// 	return -1;