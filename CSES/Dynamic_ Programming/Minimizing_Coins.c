#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int c[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    int dp[x + 1];
    for (int i = 0; i <= x; i++) {
        dp[i] = 1000001;
    }
    dp[0] = 0;

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i - c[j] >= 0) {
                if(dp[i-c[j]] != 1000001){
                    dp[i] = fmin(dp[i], dp[i - c[j]] + 1);
                }
            }
        }
    }
    if(dp[x]==1000001){
        printf("-1");
    }else{
        printf("%d\n", dp[x]);
    }


    return 0;
}
