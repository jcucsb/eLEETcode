// JC PJ 12/14/22
// SAC-SB ZOOM

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