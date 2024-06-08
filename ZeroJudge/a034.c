#include <stdio.h>

int main(){

    int a;


    int flag;
    while(scanf("%d",&a) != EOF){
        flag=0;
        for(int i=1048576;i>=1;i=i/2){
            if(a >= i){
                flag=1;
                printf("1");
                a=a-i;
            }else{
                if(flag){
                    printf("0");
                }
            }
        }
    printf("\n");
    }

    return 0;
}
