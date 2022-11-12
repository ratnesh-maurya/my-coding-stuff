//20. Valid Parentheses
//leetcode

/*  
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()==NULL)return false;
                char topchar=st.top();
                if(s[i]==')'&&topchar!='(')return false;
                if(s[i]==']'&&topchar!='[')return false;
                if(s[i]=='}'&&topchar!='{')return false;
                st.pop();
            }
        }
            return st.empty();

        }
};
*/