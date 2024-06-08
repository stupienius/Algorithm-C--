#include <stdio.h>
#define MAX 1000000007
int main(){

    int n,x;
    scanf("%d%d",&n,&x);

    int coin[n];
    int way[x+1];

    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&coin[i]);
    }

    for(i=0;i<x+1;i++){
        way[i]=0;
    }

    for(i=0;i<n;i++){
        if(coin[i] <= x){
            way[coin[i]]++;
        }
        for(j=coin[i]+1;j<=x;j++){
            way[j] += way[j-coin[i]];
            if(way[j] >= MAX){
                way[j]-= MAX;
            }
        }
    }

    printf("%d",way[x]);
    return 0;
}
