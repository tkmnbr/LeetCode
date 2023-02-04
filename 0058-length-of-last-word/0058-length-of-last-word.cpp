class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), retVal = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] != ' '){
                retVal++;
                if(i == 0 or s[i-1] == ' ')
                    return retVal;
            }
        }
        return -1;
    }
};