class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        if(n <= 1) return;

        int bp = -1;

        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
        }

        if(bp != -1) {
            int i2 = -1;

            for(int i = n - 1; i > bp; i--) {
                if(nums[i] > nums[bp]) {
                    i2 = i;
                    break;
                }
            }

            swap(nums[bp], nums[i2]);
        }

        int l = bp + 1;
        int r = n - 1;

        while(l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
};