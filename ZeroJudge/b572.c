#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int a,b,c,d,e;
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if((c*60 + d) - (a*60 + b) >= e) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}