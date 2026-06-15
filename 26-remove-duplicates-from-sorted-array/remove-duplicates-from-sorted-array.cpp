class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(); int k=1; int p=1; int mn=nums[0];
        for(int i=1;i<n;i++){
            if(mn<nums[i]){
                mn=nums[i];
                k++;
                swap(nums[p],nums[i]);
                p++;
            }
        }
        return k;
    }
};