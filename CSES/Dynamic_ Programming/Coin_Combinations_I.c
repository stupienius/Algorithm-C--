#include <stdio.h>
#define MAX 1000000007

int main(){

    int n,x;
    scanf("%d%d",&n,&x);


    int way[x+1];
    int coin[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&coin[i]);
    }

    for(i=0;i<x+1;i++){
        way[i]=0;
    }

    for(i=1;i<x+1;i++){
        for(j=0;j<n;j++){
            if(i > coin[j]){
                way[i] += way[i-coin[j]];
            }else if(i == coin[j]){
                way[i]++;
            }
            if(way[i] >= MAX){
                way[i]-=MAX;
            }
        }
    }



    printf("%d",way[x]);

    return 0;
}
