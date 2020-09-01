//1414. Find the Minimum Number of Fibonacci Numbers Whose Sum Is K
class Solution {
public:
    /*Runtime: 36 ms, faster than 6.32% of C++ online submissions for Find the Minimum Number of Fibonacci Numbers Whose Sum Is K.
    Memory Usage: 6.8 MB, less than 10.20% of C++ online submissions for Find the Minimum Number of Fibonacci Numbers Whose Sum Is K.
    */
    void buildFib(int n, vector<int> & fibNums){
        fibNums.push_back(1);
        fibNums.push_back(1);
        for(int i = 2; i <= n; ++i){
            int next = fibNums[i-2] + fibNums[i-1];
            if(next > n)
                break;
            fibNums.push_back(next);
        }
    }
    
    int greedySearch(int n, vector<int> & fibNums){
        vector<int> numbers;
        int count = 0;
        for(auto it = fibNums.end()-1; it != fibNums.begin()-1; --it){
            while(n >= *it){
                n -= *it;
                count++;
                numbers.push_back(*it);
            }
        }
        for(int num: numbers)
                cout << num << ' ';
        return count;
    }
        
    int findMinFibonacciNumbers(int k) {
        vector<int> fibNums;
        buildFib(k, fibNums);
        for(int num: fibNums)
                cout << num << ' ';
        cout << endl;
        return greedySearch(k, fibNums);
        
    }
};