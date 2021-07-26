class Solution {
public:
    bool isPalindrome(int x) {
        int k=x;
        long reverse=0;
        int lastdigit=0;
        while(x>0)
        {
            lastdigit=x%10;
            reverse=reverse*10 + lastdigit;
            x=x/10;
        }
        
        return((k==reverse)? true: false);
        
    }
};
