class Solution {
public:
    int titleToNumber(string columnTitle) {
        map<char, int> alpha;
        alpha['A'] = 1;
        alpha['B'] = 2;
        alpha['C'] = 3;
        alpha['D'] = 4;
        alpha['E'] = 5;
        alpha['F'] = 6;
        alpha['G'] = 7;
        alpha['H'] = 8;
        alpha['I'] = 9;
        alpha['J'] = 10;
        alpha['K'] = 11;
        alpha['L'] = 12;
        alpha['M'] = 13;
        alpha['N'] = 14;
        alpha['O'] = 15;
        alpha['P'] = 16;
        alpha['Q'] = 17;
        alpha['R'] = 18;
        alpha['S'] = 19;
        alpha['T'] = 20;
        alpha['U'] = 21;
        alpha['V'] = 22;
        alpha['W'] = 23;
        alpha['X'] = 24;
        alpha['Y'] = 25;
        alpha['Z'] = 26;
        char ch;
        int count = 0, index = 0;
        unsigned int num = 1;
        for (int i = 0; i < columnTitle.length() - 1; i++) {
            ch = columnTitle[i];
            index = columnTitle.length() - i;
            count += alpha[ch] * pow(26, index-1);
        }
        count += alpha[columnTitle[columnTitle.length() - 1]];
        return count;
    }
};