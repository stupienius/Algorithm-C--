#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    int cp = 0,cn = 0;
    int sp = 0,sn = 0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a>b)cp ++;
        else cn ++;
        sp += a;
        sn += b;
    }
    if(cp > cn){
        printf("Positive side\n");
    }else if(cp == cn){
        if(sn > sp){
            printf("Negative side\n");
        }else{
            printf("Positive side\n");
        }
    }else{
        printf("Negative side\n");
    }
    printf("%d %d\n",cp,cn);
    printf("%d %d",sp,sn);
    return 0;
}