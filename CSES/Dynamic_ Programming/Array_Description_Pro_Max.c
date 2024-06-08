#include <stdio.h>
#define mod 1000000007
int main(){

    int n,x;
    scanf("%d%d",&n,&x);

    int dp[100000][104]={0};

    int i;
    int a;
    scanf("%d",&a);
    if(a){
        for(i=1;i<=x;i++){
            dp[0][i]=1;
        }
    }else{
        dp[0][a] =1;
    }

    for(i=1;i<n;i++){
        scanf("%d",&a);
        if(a){
            dp[i][a] += dp[i-1][a-1];
            dp[i][a] %= mod;
            dp[i][a] += dp[i-1][a];
            dp[i][a] %= mod;
            dp[i][a] += dp[i-1][a+1];
            dp[i][a] %= mod;
        }else{
            for(i=1;i<=n;i++){
                dp[i][a] += dp[i-1][a-1];
                dp[i][a] %= mod;
                dp[i][a] += dp[i-1][a];
                dp[i][a] %= mod;
                dp[i][a] += dp[i-1][a+1];
                dp[i][a] %= mod;
            }

        }
    }

    int ans=0;
    for(i=1;i<=x;i++){
        ans += dp[n-1][i];
        ans %= mod;
    }

    printf("%d",ans);



    return 0;
}
