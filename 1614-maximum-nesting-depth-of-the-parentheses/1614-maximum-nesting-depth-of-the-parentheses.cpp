class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;
        char store;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cnt++;
                if(ans<cnt)
                {
                    ans=cnt;
                }
            }
            else if(s[i]==')')
            {
                cnt--;
            }
        }
        return ans;
    }
};