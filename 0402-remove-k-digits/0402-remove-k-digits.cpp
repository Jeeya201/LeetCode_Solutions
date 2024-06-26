// NU: DID NOT UNDERSTAND LEADING ZEROES KA
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        for(auto i:num)
        {
            while(k>0 && !st.empty() && st.top()>i)
            {
                st.pop();
                k--;
            }
            st.push(i);
        }
        
        
        while(k>0 && !st.empty())
        {
            st.pop();
            k--;
        }
        
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
     size_t pos = res.find_first_not_of('0');
        res = (pos == std::string::npos) ? "0" : res.substr(pos);
        
        return res;  

    }
};


//  std::string removeKdigits(std::string num, int k) {
//         std::stack<char> stack;
        
//         for (char digit : num) {
//             while (!stack.empty() && k > 0 && stack.top() > digit) {
//                 stack.pop();
//                 k--;
//             }
//             stack.push(digit);
//         }
        
//         // Remove remaining k digits from the end of the stack
//         while (k > 0 && !stack.empty()) {
//             stack.pop();
//             k--;
//         }
        
//         // Construct the resulting string from the stack
//         std::string result;
//         while (!stack.empty()) {
//             result += stack.top();
//             stack.pop();
//         }
//         std::reverse(result.begin(), result.end()); // Reverse to get the correct order
        
//         // Remove leading zeros
//         size_t pos = result.find_first_not_of('0');
//         result = (pos == std::string::npos) ? "0" : result.substr(pos);
        
//         return result;
//     }
// };