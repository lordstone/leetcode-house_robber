class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return nums[0]>nums[1]? nums[0]:nums[1];
        vector<int> arr(nums.size(),0);
        arr[0] = nums[0];
        arr[1] = nums[0]>nums[1]? nums[0]:nums[1];
        arr[2] = nums[0]+nums[2]>nums[1]? nums[0]+nums[2]:nums[1];
        for(int i = 3; i < nums.size(); i ++){
            arr[i] = (arr[i-2]+nums[i])>arr[i-1]? (arr[i-2]+nums[i]):arr[i-1];
        }
        return arr[nums.size() - 1];   
    }
};
