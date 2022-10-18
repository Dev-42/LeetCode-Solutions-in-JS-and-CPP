class Solution {
public:
    bool isPalindrome(int x) 
    {
       if(x<INT_MIN || x>INT_MAX)
           return false;
        long long int rev=0;
        int y=x;
        while(x!=0)
        {
            int p=x%10;
            rev=rev*10+p;
            x=x/10;
        }
        if(rev==y && rev>=0)
            return true;
        else
            return false;
    }
};