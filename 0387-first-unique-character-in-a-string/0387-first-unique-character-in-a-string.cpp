class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq_map;
        for(int i = 0; i < s.size(); i++)
            freq_map[s[i]]++;
        for(int i = 0; i < s.size(); i++){
            if(freq_map[s[i]] == 1)
                return i;
        }
        return -1;
    }
};