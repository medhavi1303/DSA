class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int mx=nums[0]; int mx2=-1;
         int r=0;
        for (int i=1;i<n;i++){
            if(mx<=nums[i] && r==0) mx=nums[i];
            else{
                r=1;
                if(mx<nums[i] || mx2>nums[i] || nums[i]>nums[0]) return false;
                mx2=nums[i];
            }
        }
        return true;
    }
};