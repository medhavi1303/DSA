class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        int low=0; int high=n-1; int index=-1;int mid;int i=0;
        while(low<=high){
            mid=(low+high)/2;
            if(target>nums[mid])
            low=mid+1;
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                index=mid;
                break;
            }
            i++;
        }
        return index;
    }
}