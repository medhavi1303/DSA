class Solution {
    public String removeStars(String s) {
      Deque<Character> l= new ArrayDeque<>();
      for(char c:s.toCharArray())
      {
        if(c=='*'){
            if(!l.isEmpty()){
                l.removeLast();
            }
        }
        else{
            l.addLast(c);
        }
      }
       StringBuilder sb = new StringBuilder();
        for (char ch : l) {
            sb.append(ch);
        }

        return sb.toString();
}}