#include <stdio.h>

int main(){

    int m,n;
    scanf("%d%d",&n,&m);


    int x[n+1];
    int input;
    x[0]=0;
    scanf("%d",&input);
    x[1] = input;
    for(int i=2;i<n+1;i++){
        scanf("%d",&input);
        x[i] = x[i-1] + input;
    }


    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        printf("%d\n",x[b]-x[a-1]);
    }

    return 0;
}
