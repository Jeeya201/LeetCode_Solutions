class Solution {
public:
    int reverse(int x) {
        double ans=0;
        int curr=x;
        while(curr)
        {
            
            int temp=curr%10;
            ans=ans*10+temp;
            curr=curr/10;
        }
        if(ans<INT_MIN || ans>INT_MAX)
        {
            return 0;
        }
        
        return ans;
        
        
    }
};