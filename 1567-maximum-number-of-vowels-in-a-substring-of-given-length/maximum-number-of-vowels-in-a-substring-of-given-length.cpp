class Solution {
public:
    bool isVowel(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u';
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int maxV = 0;
        int temp = 0;
        while (j < n) {
            if (isVowel(s[j]))
                temp++;

            if (j - i + 1 == k) {
                maxV = max(maxV, temp);
                if (isVowel(s[i]))
                    temp--;
                i++;
            }
            j++;
        }
        return maxV;
    }
};