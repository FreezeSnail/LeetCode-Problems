//1518. Water Bottles
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        /*
        Runtime: 4 ms, faster than 26.32% of C++ online submissions for Water Bottles.
        Memory Usage: 5.9 MB, less than 54.56% of C++ online submissions for Water Bottles.
        */
        
        int count = 0;
        while(numBottles >0){
            if(numBottles >= numExchange){
                count += (numBottles/numExchange)* numExchange;
                numBottles = (numBottles/numExchange) + (numBottles%numExchange);
            }
            else 
                break;
        }
            
        return count + numBottles;
        
    }
};