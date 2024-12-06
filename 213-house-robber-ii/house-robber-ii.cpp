class Solution {
public:
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1){
      return nums[0];
    } 

    auto robLinear = [&](int start, int end) {
        int prev2 = 0;
        int prev1 = 0;
        int curr = 0;
        for (int i = start; i <= end; ++i) {
            curr = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    };
    int case1 = robLinear(0, n - 2);
    int case2 = robLinear(1, n - 1);
    return max(case1, case2);
}
};