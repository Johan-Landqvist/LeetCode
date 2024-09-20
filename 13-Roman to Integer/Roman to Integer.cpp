#include <map>

class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> M;
        int num = 0;

        M['I'] = 1;
        M['V'] = 5;
        M['X'] = 10;
        M['L'] = 50;
        M['C'] = 100;
        M['D'] = 500;
        M['M'] = 1000;

        for(int i = s.length(); i > 0; i--){
            if( M[s[i]] > M[s[i-1]] ){
                num = num - M[s[i]];
            }
            else{
                num = num + M[s[i]];
            }
        }
    return num;
    }
};