class Solution {
public:
    int numWaterBottles(int n, int m) {
        int ans = n;
        int emp=n;
        int filled=0;
        while(emp+filled>=m) {
            filled = emp/m;
            emp = (emp)%m;
            ans += filled;
            emp += filled;
            filled=0;
        }
        return ans;
    }
};
