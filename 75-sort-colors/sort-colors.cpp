class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int p2=n-1, p1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                swap(nums[p1],nums[i]);
                p1++;
            }
            else if(nums[i]==2 && i<p2){
                swap(nums[i],nums[p2]);
                p2--;
                i--;
            }
        }
    }
};