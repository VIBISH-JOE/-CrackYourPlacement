#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int cnt[len+1];
        for(int i=0;i<len+1;i++){
            cnt[i]=0;
        }
        for(int i=0;i<len;i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]>1){
                return nums[i];
            }
        }
        return 0;
    }
};
int main(){
    Solution s;
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    s.findDuplicate(nums);
}