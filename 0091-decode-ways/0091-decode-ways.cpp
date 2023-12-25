class Solution {
public:
    int numDecodings(string s) {
        int size = s.length();
        if(size == 0 || s[0] == '0')
            return 0;
        
        std::vector<int> v(size+1, 0);
        v[0] = 1;
        v[1] = 1;
        for(int i = 2; i <= size; i++){
            int oneDig = s[i-1] - '0';
            int twoDig = std::stoi(s.substr(i-2, 2));
            if(oneDig != 0){
                v[i] += v[i-1];
            }
            if(10 <= twoDig && twoDig <= 26){
                v[i] += v[i-2];
            }
        }
        return v[size];
    }
};