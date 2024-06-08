#include <stdio.h>
#define mod 998244353
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    long long dp[2001]={0};

    int a;
    int i,j,k;
    int x;
    dp[0] = 1;

    for(i=0;i<m;i++){
        scanf("%d",&x);
        for(j=n;j>0;j--){
            for(k=j-1;k>=j-x && k >= 0;k--){
                dp[j] += dp[k];
                dp[j] %= mod;
            }
        }
    }

    for(i=1;i<n;i++){
        printf("%lld ",dp[i]);
    }
    printf("%lld",dp[n]);

    return 0;
}