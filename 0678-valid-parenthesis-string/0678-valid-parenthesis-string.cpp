//NU
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char c : s) {
            low += (c == '(') ? 1 : -1;
            high += (c != ')') ? 1 : -1;
            if (high < 0) return false;
            low = max(low, 0);
        }
        return low == 0;
    }
};

// class Solution {
// public:
//     bool checkValidString(string s) {
//         stack<char> st;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='(')
//             {
//                 st.push(s[i]);
//             }
//             else if(s[i]==')')
//             {
//                 st.pop();
//             }
//         }
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='*' && st.empty())
//             {
//                 break;
//             }
//             else if(s[i]=='*')
//             {
//                 st.pop();
//             }
//         }
//         if(st.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };