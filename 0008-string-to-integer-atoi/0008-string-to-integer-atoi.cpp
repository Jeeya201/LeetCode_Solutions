class Solution {
public:
    int myAtoi(string s) {
//         int i=0;
//         double ans;
    
//             while(s[i]==' ')
//             {
//                 i++;
//             }
//             int pos=0;
//             int neg=0;
//             if(s[i]=='+')
//             {
//                 pos++;
//                 i++;
//             }
//             if(s[i]=='-')
//             {
//                 neg++;
//                 i++;
//             }
            
//             if(pos>0 && neg>0)
//             {
//                 return 0;
//             }
            
//             while(i<s.size())
//             {
//                 if(s[i]>='0' && s[i]<='9')
//                 {
//                     ans=ans*10+(s[i]-'0');
//                 i++;
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
            
        
//         if(neg>0)
//             {
//                 ans=-ans;
//             }
//             if(ans>INT_MAX)
//             {
//                 return INT_MAX;
//             }
//             if(ans<INT_MIN)
//             {
//                 return INT_MIN;
//             }
//             return ans;
            
            
            
            
            
            
            
            
            
            
            
        int n=s.size();
        int i=0;
        while(s[i]==' ')//leading whitespaces
        {
            i++;
        }
        int pos=0;
        int neg=0;
        if(s[i]=='+')
        {
            pos++;//To ensure in future , that both + and - dont occur in same string . If they do , then return 0 . EG: +42 ka output must be 42 ; but +-42 ka output must be 0 (not -42!!!!)
            i++;
        }
        if(s[i]=='-')
        {
            neg++;
            i++;
        }
        if(pos>0 && neg>0) //For cases like : +-12
        {
            return 0;
        }
        double ans=0;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
            i++;
                
            }
            else
            {
                break;
            }
        }
        if(neg>0)
        {
            ans=-ans;
        }
        if(ans>=INT_MAX)
        {
            ans=INT_MAX;
        }
        if(ans<=INT_MIN)
        {
            ans=INT_MIN;
        }
        return ans;
    }
};