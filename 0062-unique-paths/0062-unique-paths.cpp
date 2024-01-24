class Solution {
public:
    int uniquePaths(int m, int n) {
       int N=m+n-2;
        int r=m-1;
        double res=1;
        // cout<<N<<r<<endl;
        for(int i=1;i<=r;i++)
        {
            res=res*(N-r+i)/i;
            cout<<res<<endl;
        }
        return (int)res;
    }
};



//  int r=m+n-2;
//         int a=1;
//         int i=1;
//         while(i<=m-1)
//         {
//             a=a*r/i;
//             i++;
//             r--; 
//         }
//         return a;

    
    