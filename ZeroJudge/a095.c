#include <stdio.h>

int main(){

    int a,b,ans;

    while (scanf("%d%d",&a,&b) != EOF){
        ans =b-1+2;
        if(a==b){
            ans -= 1;
        }
        printf("%d\n",ans);
    }


    return 0;
}
