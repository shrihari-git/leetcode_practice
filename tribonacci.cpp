/*The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.*/

class Solution {
    std::map<int,int> dp { {0,0}, {1,1}, {2,1},};
public:
    int tribonacci(int n) {
        auto search = dp.find(n);
        if(search != dp.end()){
            return search->second;
        }
        
        auto result = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        dp[n] = result;
        return result;
        
    }
};
