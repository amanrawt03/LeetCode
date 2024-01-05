class Solution {
public:
    int subtractProductAndSum(int n) {
    
        int prod = 1;
        int sum = 0;
        while( n>0){
            int q = n % 10;
            n = n/10;
            
            prod = prod * q;
            sum =  sum + q;
            
            
        }
        
        int diff = prod - sum;
        
        return diff;
    }
    

};