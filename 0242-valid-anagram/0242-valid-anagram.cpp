class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        vector<char>s_vec;
        vector<char>t_vec;
        for(int i = 0; i < s.length(); i++){
            s_vec.push_back(s[i]);
            t_vec.push_back(t[i]);
        }
        sort(s_vec.begin(), s_vec.end());
        sort(t_vec.begin(), t_vec.end());
        for(int i = 0; i < s_vec.size(); i++){
            if(s_vec[i] != t_vec[i])
                return false;
        }
        return true;
    }
};