#include <stdio.h>

int main(){

    long long n;

    while( scanf("%lld",&n) != EOF){
        printf("%lld %lld\n",(n+1)*n/2,n*(n+1)*(2*n+4)/12);
    }
    return 0;
}
