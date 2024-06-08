#include <stdio.h>
#define MAX 1000000007


int main(){


    int n,x;
    scanf("%d%d",&n,&x);


    int i,j,k,input;

    int way[x+1][n+1];                     //  x|||  n-----


    for(i=0;i<x+1;i++){
        way[i][0]=0;
    }

    for(i=1;i<n+1;i++){
        scanf("%d",&input);
        if(input == 0)
            way[input][i] = 0;
        else
            way[input][i] = 1;
        for(j=0;j<x+1;j++){
            if(j != input)
                way[j][i] = 0;
        }
    }

    for(i=0;i<x+1;i++){
        for(j=0;j<n+1;j++){
            printf("%d ",way[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");



    for(i=1;i<n+1;i++){                     //i ----- j||||
        for(j=0;j<x+1;j++){
            if(way[j][i] == 0){
                way[j][i] = way[i-1][j-1] + way[i-1][j] + way[i-1][j+1];
            }else{
                way[j][i] = way[i-1][j-1] + way[i-1][j] + way[i-1][j+1];
                for(k=i-1;k>=0;k--){
                    way[k][i] = 0;
                }
                break;
            }
        }
    }




    int ans=0;
    for(i=0;i<x+1;i++){
        ans += way[i][x];
    }



    for(i=0;i<x+1;i++){
        for(j=0;j<n+1;j++){
            printf("%d ",way[i][j]);
        }
        printf("\n");
    }
    //printf("%d",ans);






    return 0;
}

