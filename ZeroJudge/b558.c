#include <stdio.h>

int main(){

    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d\n",((n-1)*n)/2 + 1);
    }

    return 0;
}