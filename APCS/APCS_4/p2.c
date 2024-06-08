#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int overflow(int x){
    if(x >= 8) return x - 8;
    if(x < 0) return 8 + x;
    return x;
}


int main(){
    char map[8][8]={{'A','B','C','D','E','F','G','H'},
                    {'I','J','K','L','M','N','O','P'},
                    {'Q','R','S','T','U','V','W','X'},
                    {'Y','Z','a','b','c','d','e','f'},
                    {'g','h','i','j','k','l','m','n'},
                    {'o','p','q','r','s','t','u','v'},
                    {'w','x','y','z','0','1','2','3'},
                    {'4','5','6','7','8','9','+','/'}};
    int n,b,c,x,y,d;
    scanf("%d",&n);
    char ch;
    for(int i=0;i<n;i++){
        ch = getchar();
        ch = getchar();
        scanf("%d%d",&b,&c);
        for(y=0;y<8;y++){ 
            for(x=0;x<8;x++){ 
                if(map[y][x] == ch){
                    goto outside;
                }
            }
        }
        outside :
        d = 1;
        for(int j=0;j<c;j++){
            switch(b){
            case 0:
                y -= d;
                break;
            case 1:
                x += d;
                y -= d;
                break;
            case 2:
                x += d;
                break;
            case 3:
                x += d;
                y += d;
                break;
            case 4:
                y += d;
                break;
            case 5:
                y += d;
                x -= d;
                break;
            case 6:
                x -= d;
                break;
            default:
                x -= d;
                y -= d;
            }
            x = overflow(x);
            y = overflow(y);
            b++;
            if(b>7) b = 0;
            d++;
        }
        printf("%c",map[y][x]);
        if(i != n-1) printf("\n");
    }


    return 0;   
}