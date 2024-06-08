#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int time = n-1;
    for(int i=1;i<n*2;i+=2){
        for(int j=0;j<time;j++) printf("_");
        for(int j=0;j<i;j++)    printf("*");
        for(int j=0;j<time;j++) printf("_");
        printf("\n");
        time -- ;
    }
    return 0;
}