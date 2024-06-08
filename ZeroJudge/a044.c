#include <stdio.h>
#include <math.h>

int cut(int n){
    if(n==3){
        return 8;
    }
    if(n==2){
        return 4;
    }
    if(n==1){
        return 2;
    }
    if(n==0){
        return 0;
    }
    return cut(n-1) +n ;
}

int main(){

    int a;
    while( scanf("%d",&a) != EOF){
        printf("%d\n",cut(a));
    }

    return 0;
}
