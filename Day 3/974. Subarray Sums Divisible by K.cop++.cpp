class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> prefixSum(k, 0);
        prefixSum[0] = 1; // Empty subarray

        int sum = 0;
        int res = 0;

        for (int num : nums) {
            sum = (sum + num) % k;
            if (sum < 0) sum += k;
            res += prefixSum[sum];
            prefixSum[sum]++;
        }

        return res;
    }
};
