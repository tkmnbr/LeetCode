class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
        if (s == "") return true;

        string str = "";
        for(int i=0; i<s.size(); i++) 
            if(isalnum(s[i])) 
                str +=s[i];

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        
        int i = 0;
        int j = str.size() - 1;
        while (i < j) {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};