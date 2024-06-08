#pragma GCC
#include <stdio.h>

int main(){

    char a[1000001];

    scanf("%s",a);
    int i=1;
    int ans=1;
    int now_length=1;
    while(a[i] != '\0'){
        if(a[i] == a[i-1]){
            now_length++;
        }else{
            if(now_length>ans){
                ans = now_length;
                now_length=1;
            }
        }
        i++;
    }
    if(now_length>ans)
        ans = now_length;

    printf("%d",ans);
    return 0;
}
