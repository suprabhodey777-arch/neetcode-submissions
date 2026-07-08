class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int temp=target-x;
            if(s.count(temp)==1){
                return {s[temp],i};
            }
            s[x]=i;//store the index value for now 
        }
        return {};
    }
};
