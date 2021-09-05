class Solution {
public:
    int reverse(int x) {
        int lastdigit=0;
        int reverse=0;
        while(x)
        {
            lastdigit=x%10;
            reverse= (reverse*10) + lastdigit;
            x=x/10;
        }
        
        return ((reverse<INT_MIN || reverse> INT_MAX) ? 0: reverse);
    }
}; 
 
