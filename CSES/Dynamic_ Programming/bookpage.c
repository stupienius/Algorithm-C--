#include <stdio.h>

// ��ƥΨӧ��̤j����
int maxPages(int n, int x, int prices[], int pages[]) {
    // �إߤ@�ӤG���Ʋ�dp�A�Ω�s�x�������G
    int dp[n + 1][x + 1];

    // ��l��dp�Ʋ�
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
    // �Ѫ��ƶq�M�`��
    int n, x;
    scanf("%d %d", &n, &x);

    // �إ߻���M���ƪ��}�C
    int prices[n];
    int pages[n];

    // ��J�C���Ѫ�����
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // ��J�C���Ѫ�����
    for (int i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    // �p��̤j���ƨÿ�X���G
    int result = maxPages(n, x, prices, pages);
    printf("%d",result);

    return 0;
}

