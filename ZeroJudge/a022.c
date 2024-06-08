#include <stdio.h>
#include <string.h>

void main(){

    char a[1000];
    scanf("%s",a);

    int flag = 1;
    for(int i=0;i<strlen(a)/2;i++){
        if(a[i] != a[strlen(a)-1-i])
            flag = 0;
    }

    printf("%s",(flag) ? "yes" : "no");
}
