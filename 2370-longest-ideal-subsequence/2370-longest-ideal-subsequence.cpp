// class Solution {
// public:
//     int longestIdealString(string s, int k) {
//         string ans="";
//         int j=1;
//         int i=0;
//         while(i<s.size())
//         {
//             if(s[j]-s[i]<=k)
//             {
//                 ans+=s[i];
//                 i=j;
//                 j++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         cout<<ans<<endl;
//         // if(s[s.size()-1]-s[s.size()-2]<=k)
//         // {
//         //     ans+=s[s.size()-1];
//         // }
//         // cout<<s[1]-s[0]<<endl;
//         return ans.size();
//     }
// };

class Solution {
public:
    int longestIdealString(string& s, int k) {
        int seq[26]={0};// max len of seq ending at char(i+'a')
        int ans=0;
        for(char c: s){
            int i=c-'a';
            int j0=max(0, i-k),  j1=min(i+k, 25);
            for(int j=j0; j<=j1; j++)
                seq[i]=max(seq[i], seq[j]);//longest seq ending at char(j+'a')
            seq[i]++;//Put c to the tail
        }
        return *max_element(seq, seq+26);   
    }
};