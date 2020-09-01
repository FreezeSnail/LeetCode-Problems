//409. Longest Palindrome
class Solution {
public:
    int longestPalindrome(string s) {
        /*
        over complicated
        
        unordered_map<char, int> characters;
        int count = 0;
        
        for(int i = 0; i < s.length(); ++i){
            if(characters.find(s[i]) != characters.end()){ // contains the key
                characters.erase(s[i]);
                printf("%d\n", count);
                count++;
            }
            else{
                characters.insert({s[i], 1});
            }
        }
        if(!characters.empty()) return count*2 +1; //there is at least 1 char of odd count in the string so the length increases by 1
        return count*2;
        */
        
        /*
        for each char in the string, if char is of even count, we use all of then
        for all odd char counts, the max lenght is increased by 1 for all of them only
        so we count the even numbers and then add 1 if its an odd length
        */
        int count = 0;
        for(char c = 'A'; c <= 'z'; ++c){ //use chars to check each letter since the string is restricted
            count += std::count(s.begin(), s.end(), c) & 1; // only adds if its odd else will be 0
        }
        if(count > 0) count--;
        return s.length() - count;
    }
};