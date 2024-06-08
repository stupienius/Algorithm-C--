#include <stdio.h>

int add(int n){
    return n?n + add(n - 1):n;
}

int main(){

    int a;
    scanf("%d",&a);
    printf("%d",add(a));

    return 0;
}