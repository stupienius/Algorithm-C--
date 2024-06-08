#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    
    int n;
    scanf("%d",&n);

    char input[200001];
    scanf("%s",input);

    bool condition = 0;
    for(int i=0;i<n-3;i++){
        if(input[i] != input[i+1] && input[i+1] != input[i+2] && input[i+2] != input[i]){
            condition = 1;
            break;
        }
    }
    if(n == 1){
        printf("2");
    }else{
        if(condition) printf("0");
        else if(input[n-1] != input[n-2]) printf("1");
        else printf("2");
    }
    

    return 0;
}