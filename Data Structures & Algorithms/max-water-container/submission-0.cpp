class Solution {
public:
    int maxArea(vector<int>& nums) { 
       // the area shoud be width times height i mean the minimum height 
       // of the two bars selected like which ever is the minimum
        int left=0;
        int right=nums.size()-1;
        int max_area=0;
        while(left<right){
            int width=right-left;
            int area=width*min(nums[left],nums[right]);
            
            if(max_area<area){
                max_area=area;

            }
            if(nums[left]<nums[right]){
                left++;
            }
            else {
                right--;
            }





        }
        return max_area;

    }
};
