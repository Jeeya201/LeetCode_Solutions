class Solution {
public:
    
//     see https://www.youtube.com/watch?v=ZJUGtWObroc
//     Why two time we wrote the same code ?
// cause you cannot just do n%2==0 then do first , else second 
// cause , inn even length string , you ca have odd length substring , eg ababas
// so this  is correct solution
    string longestPalindrome(string s) {
        int n=s.length();
        int len=0;
        int ans=1;
        int l=0;
        int r=0;
        int start=0;
        
        for(int i=0;i<n;i++){
            l=i;
            r=i;            
            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;   
            }
            len=r-l-1;
            if(len>=ans)
            {
                ans=len;
                start=l+1;
            }
            // ans=max(ans,len);
            // cout<<l;
        }
         for(int i=0;i<n;i++){
            l=i;
            r=i+1;            
            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;   
            }
            len=r-l-1;
            if(len>=ans)
            {
                ans=len;
                start=l+1;
            }
            // ans=max(ans,len);
            // cout<<l;
        }
        
        return s.substr(start,ans);
    }
};

// 012345
// ababas

// 01234
// babad