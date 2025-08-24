class Solution {
    public int[] rearrangeArray(int[] nums) {
      int n=nums.length,j=0,k=0;
      int[] pos=new int[n/2];
      int[] neg= new int[n/2];
      for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos[j++]=nums[i];
        }
        else neg[k++]=nums[i];
      }
      j=0;k=0;
      for(int i=0;i<n;i=i+2){
        nums[i]=pos[j++];
        nums[i+1]=neg[k++];
      }
      return nums;
    }
}