#pragma GCC
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int  ans =0;

    int i;
    for(i=1;i<n+1;i++){
        ans += i;
    }

    int input;
    for(i=0;i<n-1;i++){
        scanf("%d",&input);
        ans-=input;
    }

    printf("%d",ans);
    return 0;
}
