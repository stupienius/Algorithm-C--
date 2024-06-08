#include <stdio.h>
#include <stdlib.h>

int main(){

    long long stack[10000];
    int now=0;
    char input[12];
    while (scanf("%s",&input) != EOF){
        if(input[0] == '+'){
            stack[now-2] += stack[now-1];
            now--;
        }else if(input[0] == '-' && input[1] == '\0'){
            stack[now-2] -= stack[now-1];
            now--;
        }else if(input[0] == '*'){
            stack[now-2] *= stack[now-1];
            now--;
        }else if(input[0] == '/'){
            stack[now-2] /= stack[now-1];
            now--;
        }else{
           stack[now] =  atoi(input);
           now++;
        }
    }
    printf("%d",stack[0]);

    return 0;
}
