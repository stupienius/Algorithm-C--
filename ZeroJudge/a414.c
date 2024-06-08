#include <stdio.h>

int main(){

    int a;
    int ans;

    while(1){
        scanf("%d",&a);
        if(a==0) break ;

        ans=0;
        while(a%2){
            ans++;
            a /= 2;
        }
        printf("%d\n",ans);
    }
    return 0;
}
