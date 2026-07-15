class Solution {
public:
    int trap(vector<int>& nums) {
        
        
        int total_water=0;
        for(int i=1;i<nums.size()-1;i++){
            int left_max=prefix_max(nums,i);
            int right_max=suffix_max(nums,i);
            if(nums[i]<left_max && nums[i]<right_max){
                total_water+=min(left_max,right_max)-nums[i];
            }
            


        
        }
        return total_water;



        
    }
    int prefix_max(vector<int>&nums,int k){
        vector<int>temp(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                temp[i]=nums[i];
            }
            else if(temp[i-1]>=nums[i]){
                temp[i]=temp[i-1];
            }
            else{
                temp[i]=nums[i];
            }

        }
        return temp[k];
        

    }
    int suffix_max(vector<int>&nums,int k){
        vector<int>temp(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            if (i==nums.size()-1){
                temp[i]=nums[i];
            }
            else if(nums[i]<temp[i+1]){
                temp[i]=temp[i+1];

            }
            else{
                temp[i]=nums[i];
            }
            

        }
        return temp[k];

    }
};
