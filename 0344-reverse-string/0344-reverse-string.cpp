class Solution {
public:
    void reverseString(vector<char>& s) {
        int i, j = s.size()-1;
        char temp;
        for(i = 0; i < s.size()/2; i++){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
};