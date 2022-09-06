class Solution {
public:
    string check(string s,int i,int j)
    {
        int n = s.length();
        while(i >= 0 && j<n)
        {
            if(s[i] == s[j])
            {
                i--;
                j++;
            }
            else
                break;
        }
        i++;
        j--;
        return s.substr(i,j-i+1);
    }
    string longestPalindrome(string s) 
    {
        int n = s.length();
        string temp = "";
        string final1 = "";
        for(int i=0;i<n;i++)
        {
            temp = check(s,i,i);
            if(temp.size() > final1.size())
                final1 = temp;
            temp = check(s,i,i+1);
            if(temp.size() > final1.size())
                final1 = temp;
        }
        return final1;
    }
};