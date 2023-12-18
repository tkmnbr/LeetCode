class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int num = 0;
        int i = a.length()-1;
        int j = b.length()-1;
        while(i >= 0 || j >= 0 || num != 0){
            if(i >= 0){
                num += a[i] - '0';
                i--;
            }
            if(j >= 0){
                num += b[j] - '0';
                j--;
            }
            result += num % 2 + '0';
            num /= 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }

};