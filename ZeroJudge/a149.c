#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int a,ans;
    for(int i=0;i<n;i++){
        ans=1;
        scanf("%d",&a);
        if(a ==0){
            ans=0;
        }
        while(a != 0){
            ans *= a%10;
            a /= 10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
