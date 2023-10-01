class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        
        
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);         
        }
        int ans=0;
        for(int it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int first=it;
                int cnt=1;
                while(st.find(first+1)!=st.end())
                {
                    first=first+1;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size();
//     if (n == 0) return 0;

//     int longest = 1;
//     unordered_set<int> st;
//     //put all the array elements into set:
//     for (int i = 0; i < n; i++) {
//         st.insert(a[i]);
//     }

//     //Find the longest sequence:
//     for (auto it : st) {
//         //if 'it' is a starting number:
//         if (st.find(it - 1) == st.end()) {
//             //find consecutive numbers:
//             int cnt = 1;
//             int x = it;
//             while (st.find(x + 1) != st.end()) {
//                 x = x + 1;
//                 cnt = cnt + 1;
//             }
//             longest = max(longest, cnt);
//         }
//     }
//     return longest;

// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }
