//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i]) count++;
            if(count >1) return false;
        }
        if(count ==1 && nums[0]<nums[nums.size()-1]) return false;
        return true;
    }
};
