class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[]=new int[100];
        int count=0;
        HashMap<Integer,Integer> hs=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++)
        {
            hs.put(nums[i],i);
        }
        for(int i=0;i<nums.length;i++)
        {
           int c=target-nums[i];
           if(hs.containsKey(c) && hs.get(c)!=i)
           {
             return new int[]{hs.get(c),i};
           }
        }
        return new int[]{};
    }}
