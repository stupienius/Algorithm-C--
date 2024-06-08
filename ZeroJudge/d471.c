#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int now,tem;
    while(scanf("%d",&n) != EOF){
        now=0;
        tem=now;
        for(int i=0;i<pow(2.0,n);i++){
            for(int j=pow(2.0,n-1);j>=1;j/=2){
                printf("%d",tem/j);
                tem %= j;
            }
            printf("\n");
            now++;
            tem=now;
        }
    }

    return 0;
}
