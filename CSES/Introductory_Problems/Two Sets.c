#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d",&n);

    if(! ((int)ceil(n/2.0)%2)){
        printf("YES\n");
        if(n%2){
            printf("%d\n",n/2 + 1);
            printf("1 2 ");
            for(int i=4;i<=n;i+=4){
                printf("%d %d ",i,i+3);
            }
            printf("\n%d\n",n/2);
            printf("3 ");
            for(int i=5;i<=n;i+=4){
                printf("%d %d ",i,i+1);
            }
        }else{
            printf("%d\n",n/2);
            for(int i=1;i<=n;i+=4){
                printf("%d %d ",i,i+3);
            }
            printf("\n%d\n",n/2);
            for(int i=2;i<=n;i+=4){
                printf("%d %d ",i,i+1);
            }
        }
    }else{
        printf("NO\n");
    }


    return 0;
}
