class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> c;
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(i!=j && nums[i]+nums[j]==target){
                    c.push_back(i);
                    c.push_back(j);
                    return c;
                }
            }
        }
        return c;
    }
};