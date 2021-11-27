


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
