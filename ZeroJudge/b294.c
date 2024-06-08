#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int ans=0;
    int i;
    int input;
    for(i=1;i<n+1;i++){
        scanf("%d",&input);
        ans += input*i;
    }

    printf("%d",ans);

    return 0;
}
