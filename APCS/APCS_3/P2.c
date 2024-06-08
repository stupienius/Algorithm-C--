#include <stdio.h>

int main(){
    int n,m,r;
    scanf("%d%d%d",&n,&m,&r);
    
    int c[35];
    int f[35]={0};

    scanf("%d%d",&c[0],&c[1]);

    for(int i=2;i<m;i++){
        scanf("%d",&c[i]);
        if((c[i-2] + c[i]) % r == c[i-1]) f[i-1]++;
    }

    int ans = 0;
    for(int i=0;i<m;i++){
        if(i-1 >= 0) if(f[i] == f[i-1]) ans ++; 
        if(i+1 < m) if(f[i] == f[i+1]) ans ++; 
    }

    printf("%d",ans/2);

    return 0;
}