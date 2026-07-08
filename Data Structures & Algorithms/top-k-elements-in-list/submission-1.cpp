class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(int x:nums){
            m[x]++;
        } // frequency stored

        vector<int>ans;

        while(k--){
            int maxKey = -1;
            int maxFreq = 0;

            for(auto x : m){
                if(x.second > maxFreq){
                    maxFreq = x.second;
                    maxKey = x.first;
                }
            }

            ans.push_back(maxKey);
            m.erase(maxKey); // remove it so next time we find the next max
        }

        return ans;
    }
};