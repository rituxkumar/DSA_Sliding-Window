class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0;
        int n = fruits.size();
        int result = 0;
        unordered_map<int, int> mp;

        while (j < n) {
            mp[fruits[j]]++;

            if (mp.size() <= 2) {
                result = max(result, j - i + 1);

            } else {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            j++;
        }
        return result;
    }
};