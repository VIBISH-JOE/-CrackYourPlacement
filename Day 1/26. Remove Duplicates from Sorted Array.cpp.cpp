#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        for(int i=1;i<len;){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i-1);
                len--;
            }else{
                i++;
            }
        }
        return nums.size();
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
    s.removeDuplicates(nums);
}