class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0; int profit=0; int buy=prices[0];
        int n= prices.size();
        for(int i=1;i<n;i++){
            profit=prices[i]-buy;
            if(profit<0){
                profit=0;
                buy=prices[i];
            }
            if(max<profit) max=profit;
        }
        return max;
    }
};