#define ll long long 
#define mod 1000000007
class Solution {
public:
    int n,l,k;
    int dp[109][109];
    ll solve(int len, int num){
        if(len == l){
            return num == n;
        }
        if(dp[len][num] != -1){
            return dp[len][num];
        }
       ll  ans = (solve(len+1,num) * max(0, num - k))% mod;
        ans+= (solve(len+1, num+1) * (n- num)) % mod;
        ans %= mod;
        return dp[len][num] = ans%mod;
    }
    int numMusicPlaylists(int n, int l, int k) {
        this-> n = n;
        this->l = l;
        this-> k= k;
        memset(dp,-1,sizeof(dp));
        return solve(0,0);
        
    }
};