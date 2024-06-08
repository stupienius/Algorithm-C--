#include <stdio.h>

void main(){

    int x,y;
    scanf("%d%d",&x,&y);

    int t;
    if(y>x){
        t=y;
        y=x;
        x=t;
    }


    while(y != 0){
        t=x%y;
        x=y;
        y=t;

    }

    printf("%d",x);
}
