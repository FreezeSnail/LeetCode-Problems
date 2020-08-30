// 560. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        works but too slow
        int count = 0;
        int runningSum = 0;
        for(auto i = 0; i < nums.size(); ++i){
            for(auto j = i; j < nums.size(); ++j){
                runningSum += nums[j];
                if(runningSum == k){
                    count++;
                }
            }
            runningSum = 0;
        }
        
        return count;
        
        */
        
        
        unordered_map<int, int> runningSums; // going to hash the sums
        runningSums[0] = 1;  // need to prime the hashmap incase k is present in the array
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];  // increase the total sum
            if(runningSums[sum-k])  //if the total sum minus k is present in the hash table, we know that there is a valid partial sum of k
                count += runningSums[sum-k]; // add the count of that partial sum
            runningSums[sum]++; // add the sum to the table and increment it if already there
            
        }
        return count;
        
    }
};