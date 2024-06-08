#include <stdio.h>

// ㄧ计ノㄓт程计
int maxPages(int n, int x, int prices[], int pages[]) {
    // ミ蝴计舱dpノ纗い丁挡狦
    int dp[n + 1][x + 1];

    // ﹍てdp计舱
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (prices[i - 1] <= j)
                dp[i][j] = (pages[i - 1] + dp[i - 1][j - prices[i - 1]]) > dp[i - 1][j] ?
                           (pages[i - 1] + dp[i - 1][j - prices[i - 1]]) : dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][x];
}

int main() {
    // 计秖㎝羆基
    int n, x;
    scanf("%d %d", &n, &x);

    // ミ基㎝计皚
    int prices[n];
    int pages[n];

    // 块–セ基
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // 块–セ计
    for (int i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    // 璸衡程计块挡狦
    int result = maxPages(n, x, prices, pages);
    printf("%d",result);

    return 0;
}

