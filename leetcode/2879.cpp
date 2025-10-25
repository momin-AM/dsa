class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector <int> v(1000,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                v[nums[i]/k]++;
            }
        }
        for(int i=1;i<1000;i++){
            if(v[i]==0){
                return k*i;
            }
        }
        return k;
    }
};©leetcode
