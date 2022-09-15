class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        int n = changed.size();
        if(n % 2 == 1)
            return {};
        sort(changed.begin(),changed.end());
        unordered_map<int,int> umap;
        for(int i = 0 ; i < n ; i++)
        {
            umap[changed[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(umap[changed[i]] == 0)
                continue;
            if(umap[changed[i] *2] == 0)
                return {};
            ans.push_back(changed[i]);
            umap[changed[i]]--;
            umap[changed[i]*2]--;
        }
        return ans;
    }
};