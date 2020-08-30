//443. String Compression
#include <string>
class Solution {
public:
    int compress(vector<char>& chars) {
        /*
        Runtime: 8 ms, faster than 92.69% of C++ online submissions for String Compression.
        Memory Usage: 9.2 MB, less than 12.46% of C++ online submissions for String Compression.
        */
        
        if( chars.size() < 2)
            return 1;
        
        std::string tmp = "";
        char current = *chars.begin();
        int count = 1;
        for(auto it = chars.begin()+1; it != chars.end(); ++it){
            if(current != *it){
                tmp += (current);
                if(count > 1)
                    tmp += std::to_string(count);
                count = 0;
                current = *it;
            }
            count++;
        }
        if(current == chars.back()){
            tmp += (current);
            if(count > 1)
                tmp += std::to_string(count);
        }
        std::cout << tmp;
        
        for(int i = 0; i < tmp.length(); ++i){
            chars[i] = tmp[i];
        }
        return tmp.length();
    }
};