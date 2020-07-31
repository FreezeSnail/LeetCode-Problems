// iterative binary search 
//Data structure	Array
/*
Worst-case performance  	O(log n)
Best-case performance	    O(1)
Average performance	        O(log n)
Worst-case space complexity	O(1)
*/
class iterativeBinarySearch {
    public int search(int[] nums, int target) {
        if(nums == null || nums.length == 0)
            return -1;
            
        int l = 0;
        int r = nums.length -1;
        int m = (l+r) /2;
            
        while(l <= r){
            if(nums[m] == target) return m;
            
            if(nums[m] < target) // shift left
                l = m+1;
            else
                r = m-1;
            m = (l+r) /2;
        }
        
        return -1;
    }
}