#pragma GCC
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);


    int i;
    if(n<4 && n>1) printf("NO SOLUTION");
    else{
        for(i=2;i<n+1;i+=2){
            printf("%d ",i);
        }
        for(i=1;i<n+1;i+=2){
            printf("%d ",i);
        }

    }

    return 0;
}
