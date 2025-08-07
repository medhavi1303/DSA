class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n=nums.length;
        int flag=0;
        int arr[]=new int[n];
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                flag++;
                if(i==n-1){
                    arr[j++]=flag;
                }
            }
            else {
                arr[j++]=flag;
                flag=0;
            }
        }
        int lrg=0;
        for(int i=0;i<arr.length;i++){
            if(lrg<arr[i]){
                lrg=arr[i];
            }
        }
        return lrg;
    }
}