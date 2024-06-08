#include <stdio.h>

int count(int n){

    if(n==1){
        return 2;
    }
    if(n == 0){
        return 0;
    }

    return count(n-1) + 2*(n-1) ;
}

int main(){

    int n;

    while(scanf("%d",&n) != EOF){
        printf("%d\n",count(n));
    }

    return 0;
}
