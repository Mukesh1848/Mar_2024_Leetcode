//  2864. Maximum Odd Binary Number

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        const int N = s.length(); 

        // Find ones_cnt
        int oneCount = 0;
        for (char& c: s) {
            oneCount += c - '0';
        }

        string ans = "";
        for (int i = 0; i < oneCount - 1; i++) {
            ans += "1";
        }
        
        for (int i = 0; i < N - oneCount; i++) {
            ans += "0";
        }
        ans += "1";
        return ans;
    }
};
