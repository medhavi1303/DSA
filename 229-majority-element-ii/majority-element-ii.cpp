class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=-1; int ele2=-1; int cnt1=0, cnt2=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;
            else{
                if(cnt1==0){
                    ele1=nums[i];
                    cnt1++;
                }
                else if(cnt2==0){
                    ele2=nums[i];
                    cnt2++;
                }
                else{
                    cnt1--;
                    cnt2--;
                }
            }
        }
        vector<int> res;
        cnt1=0, cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;
        }
        if(n/3<cnt1) res.push_back(ele1);
        if(n/3<cnt2 && ele1!=ele2) res.push_back(ele2);
        return res;
    }
};