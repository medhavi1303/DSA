class Solution {
public:
    int nCr(int n, int r) {
    if(r > n) return 0;

    int res = 1;

    for(int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }

    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        for(int i=0;i<numRows;i++){
            nums[i].resize(i+1);
            for(int j=0;j<i+1;j++){
                nums[i][j]=nCr(i,j);
            }
        }
        return nums;
    }
};