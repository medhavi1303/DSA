
class Solution {
    public boolean uniqueOccurrences(int[] arr) {
       HashMap<Integer, Integer> hm= new HashMap<>();
       for(int num:arr)
       {
            hm.put(num,hm.getOrDefault(num,0)+1);
       }
       Set<Integer> ss= new HashSet<>();
       for(int num:hm.values())
       {
            if(!ss.add(num))
            {
                return false;
            }
            ss.add(num);
       }
       return true;
    }
}