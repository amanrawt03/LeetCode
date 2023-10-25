class Solution {
public:
    bool isPowerOfTwo(int n) {
        int power;
        for (int x = 0; x<= 30; x++){
             power = pow(2,x);

              if(n == power){
            return true;
        }
        }
        return false;
    }
};