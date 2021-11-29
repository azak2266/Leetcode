#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else 
            {
                if (st.empty())
                    return false;
                if (st.top() == '(' && s[i] != ')')
                    return false;
                if (st.top() == '[' && s[i] != ']')
                    return false;
                if (st.top() == '{' && s[i] != '}')
                    return false;  
                st.pop();
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};

int main()
{
    Solution s;
    int ans;
    string input = "())"; 
    ans = s.isValid(input);
    cout<<ans<<endl;
    return 0;
}