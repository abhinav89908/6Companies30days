class Solution2 {
public:
    int solve(int n, int k){
        if(n==1) return 0;
        return (solve(n-1, k)+k)%n;
    }
    
    int findTheWinner(int n, int k) {
        return solve(n, k)+1;
    }
};

class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans = 0;
        for(int i=2; i<=n; i++)
            ans = (ans+k)%i;
        return ans+1;
    }
};
