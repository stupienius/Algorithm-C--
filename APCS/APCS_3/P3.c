#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool func(char a[]){
    bool g;
    if(a[0] == 'F') g = 1;
    else g = 0;

    a[0]='0';

    int age = atoi(a);
    if(age >= 65 || age <= 12 )  return 1;
    if(g && age <= 45 && age >= 35)   return 1;

    return 0;
}

int main(){
    
    int n,k;
    scanf("%d%d",&n,&k);

    char input[5];

    int i;
    long long ans = 0;
    int count = 0;
    for(i=0;i<n;i++){
        scanf("%s",input);
        if(count < k){
            if(func(input)){
                ans += i;
                count ++;
            }
        }
    }
    printf("\n%lld",ans);

    return 0;
}