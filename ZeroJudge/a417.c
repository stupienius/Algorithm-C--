#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int  side,m;
    int  ans[100][100];
    int  x,y;
    int  round;
    int  vx,vy;
    for(int i=0;i<n;i++){

        scanf("%d%d",&side,&m);
        x=0;y=0;
        if(m==1){
            vx=1;
            vy=1;
        }else{
            vx=1;
            vy=-1;
        }
        round=0;
        for(int j=0;i<side*side;j++){
            a[x][y]=j;
        }
    }

    return 0;
}
