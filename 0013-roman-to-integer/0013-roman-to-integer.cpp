class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
                ans-=mp[s[i]];
            }
            else
            {
                ans+=mp[s[i]];
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        // int res=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='I')
        //     {
        //         res+=1;
        //     }
        //     else if(s[i]=='V')
        //     {
        //         if(i>=1&& s[i-1]=='I')
        //         {
        //             res+=4;
        //             res-=1;
        //         }
        //         else
        //         {
        //         res+=5;
        //         }
        //     }
        //     else if(s[i]=='X')
        //     {
        //         if(i>=1&& s[i-1]=='I')
        //         {
        //             res+=9;
        //             res-=1;
        //         }
        //         else
        //         {
        //         res+=10;
        //         }
        //     }
        //     else if(s[i]=='L')
        //     {
        //         if(i>=1&& s[i-1]=='X')
        //         {
        //             res+=40;
        //             res-=10;
        //         }
        //         else
        //         {
        //         res+=50;
        //         }
        //     }
        //     else if(s[i]=='C')
        //     {
        //         if(i>=1&& s[i-1]=='X')
        //         {
        //             res+=90;
        //             res-=10;
        //         }
        //         else
        //         {
        //             res+=100;
        //         }
        //     }
        //     else if(s[i]=='D')
        //     {
        //         if(i>=1&& s[i-1]=='C')
        //         {
        //             res+=400;
        //             res-=100;
        //         }
        //         else
        //         {
        //         res+=500;                    
        //         }
        //     }
        //     else if(s[i]=='M')
        //     {
        //         if(i>=1&& s[i-1]=='C')
        //         {
        //             res+=900;
        //             res=res-100;
        //         }
        //         else
        //         {
        //             res+=1000;
        //         }
        //     }
        // }
        // return res;
    }
};