class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++)
        {
            // cout<<haystack.substr(i,needle.size())<<endl;
            if(haystack.substr(i,needle.size())==needle)
            {
                return i;
            }
        }
        return -1;
        
        
        
        
        
        
        
//         int n,m;
//             n=size(haystack);
//             m=size(needle);

//         int count=0;
//         int i=0;
//         int  j=i;
//         while(i<n)
//         {
//             while(j<m)
//             if(haystack[i]==needle[j])
//             {
//                 count++;
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if(count==size(needle) || count==size(needle))
//         {
//             return 24;
//         }
//         else 
            
//         {
//             return -1;
//         }
    }
};


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int m = needle.length();
//         int n = haystack.length();

//         for (int windowStart = 0; windowStart <= n - m; windowStart++) {
//             for (int i = 0; i < m; i++) {
//                 if (needle[i] != haystack[windowStart + i]) {
//                     break;
//                 }
//                 if (i == m - 1) {
//                     return windowStart;
//                 }
//             }
//         }

//         return -1;
        
//     }
// };