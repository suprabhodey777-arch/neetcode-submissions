class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int length=1;
        int max_length=1;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        while(i<nums.size()-1){
            int diff=nums[i+1]-nums[i];
            if(diff==1){
                length++;
                if(max_length<=length){
                    max_length=length;
                }
                
                
            }
            else if (diff==0){
                
            }

            else{
                
                length=1;
            }
            
            
            


            i++;

        }
        return max_length;
        
        
    }
};
