//NU
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
       int open=0;
        int close=0;
        int n=s.size()-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' or s[i]=='*')
            {
                open++;
            }
            else
            {
                open--;
            }
            if(s[n]==')' || s[n]=='*')
            {
                close++;
                cout<<"hereee"<<endl;
            }
            else
            {
                close--;
            }
            if(open<0 || close<0)
            {
                return false;
            }
            n--;
        }
        return true;
    }
};
