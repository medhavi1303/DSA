class Solution {
    public int removeDuplicates(int[] nums) {
        SortedSet<Integer> ss=new TreeSet<>();
        for(int i=0;i<nums.length;i++){
            ss.add(nums[i]);
        }
       int i = 0;

for (int val : ss) {
    nums[i++] = val;
}
        int k=ss.size();
        return k;
    }
}