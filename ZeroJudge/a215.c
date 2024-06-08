#include <stdio.h>

int main(){
    int m,n,i;

    while( scanf("%d%d",&n,&m) != EOF ){
        for(i=1;n*i +(i)*(i-1)/2 <= m;i++){
            if( n*i +(i)*(i-1)/2 > m) break;
        }
        printf("%d\n",i);
    }
    return 0;
}
