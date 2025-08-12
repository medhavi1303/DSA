class Solution {
    public int singleNumber(int[] nums) {
       HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
       int n=nums.length;
       int count;
       for(int i=0;i<n;i++){
         count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(!hm.containsKey(nums[i])){
                hm.put(nums[i],count);
            }
       }
       int flag=0;
       for(int key:hm.keySet()){
            if(hm.get(key)==1){
                flag=key;
            }
       }
       return flag;
    }
}