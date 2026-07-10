class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& nums) {

        unordered_set<char> r;
        unordered_set<char> c;

        // Check rows and columns
        for (int i = 0; i < nums.size(); i++) {

            for (int j = 0; j < nums.size(); j++) {

                // Check row
                if (nums[i][j] != '.') {
                    if (r.count(nums[i][j])) {
                        return false;
                    }
                    r.insert(nums[i][j]);
                }

                // Check column
                if (nums[j][i] != '.') {
                    if (c.count(nums[j][i])) {
                        return false;
                    }
                    c.insert(nums[j][i]);
                }
            }

            r.clear();
            c.clear();
        }

        // Check each 3x3 box
        unordered_set<char> box;

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                box.clear();

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {

                        if (nums[row + i][col + j] == '.') {
                            continue;
                        }

                        if (box.count(nums[row + i][col + j])) {
                            return false;
                        }

                        box.insert(nums[row + i][col + j]);
                    }
                }
            }
        }

        return true;
    }
};