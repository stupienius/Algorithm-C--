#include <stdio.h>
#define MAX 1000000007

int main(){

    int n,x;
    scanf("%d%d",&n,&x);

    int way[n][x];


    int i,j,k;
    for(i=0;i<x;i++){
        way[0][i]=1;
    }
    for(i=1;i<n;i++){
        for(j=0;j<x;j++){
            way[i][j] = 0;
        }
    }
    int input;
    for(i=0;i<n;i++){
        scanf("%d",&input);
        if(i==0 && input != 0){
            for(j=0;j<x;j++){
                way[0][j] = 0;
            }
        }
        if(input != 0){
            way[i][input-1]=1;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<x;j++){
            printf("%d",way[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");


    for(i=1;i<n;i++){
        for(j=0;j<x;j++){
            if(way[i][j] == 0){
                if(j>=1){
                    if(j<=x-2){
                        way[i][j] = way[i-1][j-1] + way[i-1][j] + way[i-1][j+1];
                    }else{
                        way[i][j] = way[i-1][j-1] + way[i-1][j];
                    }
                }else{
                    way[i][j] =  way[i-1][j] + way[i-1][j+1];
                }
                way[i][j] %= MAX;
            }else{
                if(j>=1){
                    if(j<=x-2){
                        way[i][j] = way[i-1][j-1] + way[i-1][j]+ way[i-1][j+1];
                    }else{
                        way[i][j] = way[i-1][j-1] + way[i-1][j];
                    }
                }else{
                    way[i][j] =  way[i-1][j] + way[i-1][j+1];
                }
                way[i][j] %= MAX;
                for(k=j-1;k>=0;k--){
                    way[i][k]=0;
                }
                break;
            }
        }
    }
    int ans=0;
    for(i=0;i<x;i++){
        ans += way[n-1][i];
        ans %= MAX;
    }


    for(i=0;i<n;i++){
        for(j=0;j<x;j++){
            printf("%d ",way[i][j]);
        }
        printf("\n");
    }
    printf("%d",ans);

    return 0;
}
