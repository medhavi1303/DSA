class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int num = 0;
        int cost = 0;

        for(int i = 0; i < costs.size(); i++) {
            if(cost + costs[i] <= coins) {
                cost += costs[i];
                num++;
            } else {
                break;
            }
        }

        return num;
    }
};