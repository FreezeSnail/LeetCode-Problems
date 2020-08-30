// 523. Continuous Subarray Sum
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        /*
        Runtime: 104 ms, faster than 24.61% of C++ online submissions for Continuous Subarray Sum.
        Memory Usage: 25.5 MB, less than 94.81% of C++ online submissions for Continuous Subarray Sum.
        */
        
        auto runningSum = 0;
        int count = 0;
        for(auto i = 0; i < nums.size(); ++i){
            for(auto j = i; j < nums.size(); ++j){
                runningSum += nums[j];
                count++;
                if(k!=0){
                    if(runningSum%k == 0 && count > 1){
                        return true;
                    }
                } else
                    if(runningSum == 0 && count > 1){
                        return true;
                    }
            }
            runningSum = 0;
            count = 0;
        }
        
        return false;
        
        // can probably do the same thing with a hashtable faster

        
    }
};