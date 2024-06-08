#include <stdio.h>
#define MAX 1000000007

int main(){

    int n;
    scanf("%d",&n);
    int grid[n][n];


    char input[n+1];
    int i,j;

    for(i=0;i<n;i++) for(j=0;j<n;j++)
        grid[i][j]=-1;

    for(i=0;i<n;i++){
        scanf("%s",input);
        for(j=0;j<n;j++) if(input[j] == '*')
            grid[i][j] = 0;

    }

    if(grid[0][0] != 0) grid[0][0]=1;

    for(i=1;i<n;i++){
        if(grid[i][0] != 0) grid[i][0] = grid[i-1][0];
        if(grid[0][i] != 0) grid[0][i] = grid[0][i-1];
    }



    for(i=1;i<n;i++) for(j=1;j<n;j++){
        if(grid[i][j] != 0)
            grid[i][j]=grid[i-1][j]+grid[i][j-1];
        if(grid[i][j] >= MAX)
            grid[i][j] -= MAX;
    }


    printf("%d",grid[n-1][n-1]);


    return 0;
}
