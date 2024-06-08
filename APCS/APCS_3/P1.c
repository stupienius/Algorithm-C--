#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char a[1001];

bool start(int n){
    if(a[n] != 'A') return 0;
    if(a[n+1] != 'U') return 0;
    if(a[n+2] != 'G') return 0;
    return 1;
}

bool end(int n){
    if(a[n] != 'U') return 0;
    if(a[n+1] == 'A' && a[n+2] == 'A') return 1;
    if(a[n+1] == 'A' && a[n+2] == 'G') return 1;
    if(a[n+1] == 'G' && a[n+2] == 'A') return 1;
    return 0;
}

int main(){

    scanf("%s",a);

    int i;
    int t;
    for(i=0;i<strlen(a) - 1;i++){
        if(start(i)) break;
    }
    t=i;
    for(;i<strlen(a) - 1;i += 3){
        if(end(i)){
            printf("%d",(i-t)/3);
            break;
        }
    }
    return 0;
}