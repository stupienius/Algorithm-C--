#include <stdio.h>

int main(){

    float n;
    float x,sum=0;
    while(scanf("%e",&n) != EOF){
        sum=0;
        for(int i=0;i<n;i++){
            scanf("%e",&x);
            sum+=x;
        }
        (sum/n > 59) ? printf("no\n"): printf("yes\n");
    }
    return 0;
}

