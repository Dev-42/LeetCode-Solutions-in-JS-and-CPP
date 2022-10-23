class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> arr(nums.size());
        vector<int> result(2);
        
        for(int i : nums)
        {
            arr[i-1]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == 2)
            {
                result[0] = i + 1;
            }
            if(arr[i] == 0)
            {
                result[1] = i + 1;
            }
        }
        return result;
    }
};