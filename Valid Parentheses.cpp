/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true

*/ 




class Solution {
public:
    bool isValid(string s) {
        stack<int> ST;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]== '[')
            {
                ST.push(s[i]);
            }
            
            else
            { if(ST.empty()==false and ((s[i]==')' && ST.top()=='(' ) ||  (s[i]=='}' &&               ST.top()=='{') || (s[i]==']' && ST.top()=='[') ) )
            {
                  ST.pop();
            }
                    else
                    {
                        return false;
                    }
            }
        }
     if(ST.empty()==true)
        {
            return true;
        }
return false;
    }
};
