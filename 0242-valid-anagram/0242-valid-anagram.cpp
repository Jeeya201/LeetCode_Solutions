class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char , int> mp1;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp1[i]--;
        }
        for(auto i: mp1)
        {
            if(i.second!=0)
            {
                return false;
            }
        }
        return true;
        
    }
};