#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    int flag=0;
    if(a == 0){
        printf("0");
    }
    while(a !=0 ){
        if( a%10 != 0){
            flag=1;
            printf("%d",a%10);
        }else{
            if(flag){
                printf("0");
            }
        }
        a=a/10;
    }


    return 0;
}
