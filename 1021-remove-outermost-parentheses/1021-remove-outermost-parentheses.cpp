class Solution {
public:
    string removeOuterParentheses(string s) {
        int temp=0;
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && temp>0)
            {
                res+=s[i];
            }
                        if(s[i]=='(') temp++;
            if(s[i]==')' && temp>1 )
            {
                                res+=s[i];   
            }
            if(s[i]==')')temp--;
           
        }
        return res;
    }
};