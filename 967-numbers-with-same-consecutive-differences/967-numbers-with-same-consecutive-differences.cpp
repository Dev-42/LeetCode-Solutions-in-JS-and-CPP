class Solution {
public:
    vector<int> ans;
    //function to count the number of digits at each step
    int countNum(int num)
    {
        int count = 0;
        while(num > 0)
        {
            count++;
            num = num / 10;
        }
        return count;
    }
    //function to calculate the find number
    void findNumber(int num , int n , int k)
    {
        if(countNum(num) == n)
        {
            ans.push_back(num);
            return;
        }
        for(int i = 0 ; i <= 9 ; i++)
        {
            int ld = num % 10;
            if(abs(ld - i) == k)
            {
                int number = num * 10 + i;
                findNumber(number,n,k);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        for(int i = 1 ; i <= 9 ; i++)
        {
            findNumber(i , n , k);
        }
        return ans;
    }
};