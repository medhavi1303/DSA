class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos(n/2); vector<int> neg(n/2); int p=0, m=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos[p++]=nums[i];
            else{
                neg[m++]=nums[i];
            }
        }
        p=0; m=0;
        for(int i=0;i<n;i++){
            if(i%2==0) nums[i]=pos[p++];
            else nums[i]=neg[m++];
        }
        return nums;
    }
};