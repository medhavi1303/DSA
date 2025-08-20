class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int minp=Integer.MAX_VALUE;
        int maxpr=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minp){
                minp=prices[i];
            }
            else if(prices[i]-minp>maxpr){
                maxpr=prices[i]-minp;
            }

        }
        return maxpr;
    }
}