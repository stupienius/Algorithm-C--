#pragma GCC
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int now,pre;
    long long ans=0;
    scanf("%d",&pre);
    for(int i=1;i<n;i++){
        scanf("%d",&now);
        if(now < pre){
            ans += pre-now;
        }else{
            pre = now;
        }
    }
    printf("%lld",ans);
    return 0;
}
