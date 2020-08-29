//189. Rotate Array
void rotate(vector<int>& nums, int k) {
        /*
            Runtime: 8 ms, faster than 88.64% of C++ online submissions for Rotate Array.
Memory Usage: 10.1 MB, less than 39.05% of C++ online submissions for Rotate Array.
        */
        int length = nums.size();
        
        std::vector<int> copy(length);
        
        for(int i = 0; i < length; i++){
            copy[i] = nums[i];
        }
        for(int i = 0; i < length; i++){
            nums[(i+k)%length] = copy[i];
            //we need to rotate each posistion k to the left
            //so the posistion is i+k
            // use % to fit that back into the ring of array indicies
        }

    }