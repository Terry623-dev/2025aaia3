///week03-3a.cpp二合一的第1種方法
///LeetCode 學習計畫 283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }
        ///再用fot迴圈放回去
        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i];///塞回去
            else nums[i] = 0;///其他的放0

        }
    }
};
