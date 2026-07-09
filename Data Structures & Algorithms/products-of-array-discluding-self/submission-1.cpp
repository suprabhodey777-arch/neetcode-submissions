class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> v(nums.size(), 0);

        int prod = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                prod *= nums[i];
            else
                zeroCount++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                v[i] = 0;
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    v[i] = prod;
                else
                    v[i] = 0;
            }
            else {
                v[i] = prod / nums[i];
            }
        }

        return v;
    }
};
