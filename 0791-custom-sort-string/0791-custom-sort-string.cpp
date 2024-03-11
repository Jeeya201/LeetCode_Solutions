class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(auto ele:s)
        {
            mp[ele]++;
        }
string ans="";
       for(auto ele:order)
       {
           while(mp[ele]>0)
           {
               ans.push_back(ele);
               mp[ele]--;
           }
       }
        for(auto i:s)
        {
            while(mp[i]>0)
            {
                ans.push_back(i);
                mp[i]--;
            }
        }
        return ans;
    }
};