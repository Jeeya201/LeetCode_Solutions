class Solution {
public:
    
    // YOU can say both solutions : 2nd one uses map , so extra space ; but 1st one uses .substr which is inbuilt ----1st preffered
        string reverseWords(string s) {
    stack<string> st;

    int i=0;
    string word="";
    while(i<s.size())
    {
        if(s[i]!=' ')
        {
            word+=s[i];
            i++;
        }
        else
        {
            while(s[i]==' ')
            {
                i++;
            }
            if(word!="") //to avoid starting space : Only if its not a space , then you add it to stack
            {
                st.push(word);
                // cout<<word;
                word="";
            }
        }
    }
            st.push(word);
string ans;
            cout<<endl;
while(!st.empty())
    {
                word=st.top();
                // cout<<"word "<<word;
                st.pop();
                if(st.size()==0)
                {
                    ans+=word;
                }
                else if(word!="")//To avoid leading or  trailing spaces 
                {
                    ans+=word+' '; 
                }
            }
            return ans;
        }    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//     string reverseWords(string s) {
//         int n=s.size();
//         int i=0;
//         int j=0;
//         string res="";
//         while(i<n)
//         {
//             while(i<n && s[i]==' ')
//             {
//                 i++;
//             }
//             if(i>=n) break;
//             j=i+1;
//             while(j<n && s[j]!=' ')
//             {
//                 j++;
//             }
//             string sub=s.substr(i,j-i);
//             if(res.size()==0)
//             {
//                 res+=sub;
//             }
//             else
//             {
//                 res=sub+" "+res;
//             }
//             i=j+1;
//         }
//         return res;
        
//     }
    
};

// class Solution {
// public:
//     string reverseWords(string s) {
//         unordered_map<int, string> mp;
//         int n = s.length(), word_count = 1;
//         for(int i=0; i<n; i++){
//             if(s[i] != ' '){
//                 string temp = "";
//                 while(i<n && (s[i] != ' ' || i==n-1)){
//                     temp += s[i++];
//                 }
//                 mp[word_count++] = temp;
//             }
//         }
//         string ans = "";
//         while(--word_count){
//             ans += mp[word_count] + " ";
//         }
//         ans.pop_back();
//         return ans;
//     }
// };