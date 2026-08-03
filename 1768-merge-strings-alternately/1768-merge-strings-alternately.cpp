class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        ans.reserve(word1.size() + word2.size());   // avoid reallocations

        int i = 0;
        while (i < word1.size() && i < word2.size()) {
            ans += word1[i];
            ans += word2[i];
            i++;
        }

        ans += word1.substr(i);
        ans += word2.substr(i);

        return ans;
    }
};