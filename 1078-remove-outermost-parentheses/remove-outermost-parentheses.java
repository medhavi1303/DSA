class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder r= new StringBuilder();
        int d=0;
        for(int i=0;i<s.length();i++){
            char c= s.charAt(i);
            if(c=='('){
                if(d>0) r.append(c);
                d++;
            }
            else{
                d--;
                if(d>0) r.append(c);
            }
        }
           return r.toString();
    }
}