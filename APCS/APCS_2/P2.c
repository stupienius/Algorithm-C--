#include <stdio.h>

int main(){

    int n,q;
    int a[11];


    scanf("%d%d",&n,&q);
    for(int i=0;i<11;i++){
        scanf("%d",&a[i]);
    }
    int ch[n][4];
    int que[q][2];
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&ch[i][0],&ch[i][1],&ch[i][2],&ch[i][3]);
    }
    for(int i=0;i<q;i++){
        scanf("%d%d",&que[i][0],&que[i][1]);
    }

    int time=0;
    for(int i=0;i<q;i++){
        if(time <= n-1)
        while(que[i][0] > ch[time][0] ||(que[i][0] == ch[time][0] && que[i][1] > ch[time][1])){
            for(int k=0;k<11;k++){
                if(a[k] == ch[time][2]){
                    a[k] = ch[time][3];
                    break;
                }
            }
            time++;
        }
        for(int j=0;j<11;j++){
            if(j != 10)printf("%d ",a[j]);
            else printf("%d\n",a[j]);
        }
    }

    return 0;
}
