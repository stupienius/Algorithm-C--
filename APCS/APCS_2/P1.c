#include <stdio.h>

int main(){
    int c1,c2,v1,v2;
    scanf("%d%d%d%d",&c1,&c2,&v1,&v2);

    int a=c2*v2*5;
    if(a == v1*c1*2){
        printf("Yes\n%d",a);
    }else{
       printf("No");
    }
    return 0;
}

