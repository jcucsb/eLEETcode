// JC PJ 12/14/22
// SAC-SB ZOOM

// Notes:
// If val in nums, erase it in nums
// Erase deletes an element and moves everything to the left, thus we have to
// decrease i to not skip an element when iterating through nums

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};