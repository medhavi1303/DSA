class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0; long long count=0;
        long long x=0; long long rem=0;
        while(n>0){
            rem=n%10;
            if(rem!=0){
                sum+=rem;
                count++;
                if(count==1){
                    x+=rem;
                }
                else{
                    for(int i=1;i<count;i++){
                        rem=rem*10;
                    }
                    x+=rem;
                }
                
            }
            n=n/10;
        }
        return sum*x;
    }
};