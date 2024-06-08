#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int mod=1000000007;

    int dp[n + 1];

    for(int i=0;i<n+1;i++){
        dp[i]=0;
    }

    for(int i=0;i<n+1;i++){
        for(int j=1;j<7;j++){
            if(i>j){
                dp[i] += dp[i-j];
                dp[i] %= mod;
            }else if(i == j){
                dp[i]++;
                dp[i] %= mod;
            }
        }
    }

    printf("%d",dp[n]);

    return 0;
}


