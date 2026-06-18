class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        
        while(nums.size()!=0){
            int temp=nums.back();
            nums.pop_back();
            
            //what to return fix output to false at first and change if duplicate found 
            
            if (s.count(temp)==0){
                s.insert(temp);                
            } 
            else{
                return true;
            }
            

        }
        return false;
        
    }
};