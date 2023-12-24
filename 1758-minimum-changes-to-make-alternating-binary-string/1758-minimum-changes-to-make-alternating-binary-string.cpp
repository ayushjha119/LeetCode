class Solution {
public:
    int minOperations(string s) {
        int flip0 = 0, flip1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                flip0 += s[i] == '0' ? 0 : 1;
                flip1 += s[i] == '1' ? 0 : 1;
            } else {
                flip0 += s[i] == '1' ? 0 : 1;
                flip1 += s[i] == '0' ? 0 : 1;
            }
        }
        return min(flip0, flip1);
    }
};