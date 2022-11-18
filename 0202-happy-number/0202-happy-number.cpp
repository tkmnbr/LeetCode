class Solution {
public:
    long long int getResult(int val){
        if(val >= 0 and val <= 9)
            return val;
        else{
            long long count = 0;
            while(val){
                int remainder = val % 10;
                int sqrtNum = pow(remainder, 2);
                count += sqrtNum;
                val /= 10;
            }
            int num = getResult(count);
            return num;
        }
    }
    bool isHappy(int n) {
       int result = getResult(n);
       if(result == 1 or result == 7){
           return true;
       }
       else{
           return false;
       }
    }
};