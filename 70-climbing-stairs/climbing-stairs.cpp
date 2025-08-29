class Solution {
public:

    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
         int prev=1;
         int prev1=1;
         int ans=0;
         for(int i=2;i<=n;i++){
            ans=prev+prev1;
            prev=prev1;
            prev1=ans;
            
         }
         return prev1;

    }
};