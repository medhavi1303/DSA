class Solution {
    public boolean check(int[] nums) {
        int n=nums.length;
        int p=0;
        for(int i=0;i<n;i++){
            if(i!=(n-1)){
            if(nums[i+1]<nums[i]){
                p++;
            }}
        }
        if(nums[0]<nums[n-1]){
            p++;
        }

        if(p>1){
            return false;
        }
        else return true;
    }
}