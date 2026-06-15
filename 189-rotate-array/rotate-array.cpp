class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int f=n-k;
        vector<int> arr(k);
        if(n>=k){
            for(int i=0;i<k;i++){
            arr[i]=nums[f++];
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        }
        else{
            while(k!=0){
                int temp=nums[n-1];
                for(int i=n-1;i>0;i--){
                    nums[i]=nums[i-1];
                }
                nums[0]=temp;
                k--;
            }
        }
    }
};