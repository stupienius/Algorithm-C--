#include <stdio.h>
#include <string.h>
int main(){

    char n[20];
    scanf("%s",n);
    int a[] = {6,2,5,5,4,5,6,4,7,6};
    int ans = 0;


    for(int i=0;i<strlen(n);i++){
        ans += a[n[i] - '0'];
    }

    printf("%d",ans);

}