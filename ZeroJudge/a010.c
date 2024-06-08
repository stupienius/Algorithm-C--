#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d",&n);

    int flag = 0;
    int i=1;
    while(n != 1  &&  i < sqrt(n)+1){
        flag=0;
        while(n%i == 0){
            flag = 1;
            printf("i");
            n=n/i;
            if(n%i == 0){
                printf("^");
            }
        }
        if(flag){
            printf("*");
        }
        i++;
    }

    return 0;
}