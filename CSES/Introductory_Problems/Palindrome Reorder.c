#include <stdio.h>

int main(){

    char a[1000001];
    int x[26]={0};

    scanf("%s",a);

    for(int i=0;a[i]!='\0';i++){
        x[(int)(a[i]-'A')]++;
    }

    int key=0;
    for(int i=0;i<26;i++){
        //printf("%d ",x[i]);
        if(x[i]%2){
           key++;
        }
    }

    char mid='a';
    if(key<2){
        for(int i=0;i<26;i++){
            if(x[i]%2){
                mid = i+'A';
                x[i]--;
            }
            for(int j=0;j<x[i]/2;j++){
                printf("%c",i+'A');
            }
        }
        if(mid != 'a'){
            printf("%c",mid);
        }
        for(int i=25;i>=0;i--){
            for(int j=0;j<x[i]/2;j++){
                if(x[i]%2)   break;
                printf("%c",i+'A');
            }
        }
    }else{
        printf("NO SOLUTION");

    }





    return 0;
}

