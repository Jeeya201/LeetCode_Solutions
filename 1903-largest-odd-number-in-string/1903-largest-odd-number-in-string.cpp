class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        string temp;
        int i=num.size()-1;
       while(i>=0)
       {
          if(num[i]%2!=0)
          {
              for(int j=0;j<=i;j++)
              {
                ans+=num[j];
              }
              break;
          }
           else
           {
               i--;
           }
       }
        return ans;
    }
};