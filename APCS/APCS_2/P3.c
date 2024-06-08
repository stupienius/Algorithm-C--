#include <stdio.h>
#include <math.h>
#define log2(x) log(x)/log(2.0)

int main(){

    int n,m;
    scanf("%d%d",&n,&m);

    int sbox[4][(int)pow(2.0,n-2.0)];
    for(int i=0;i<4;i++){
        for(int j=0;j<pow(2.0,n-2.0);j++){
            scanf("%d",&sbox[i][j]);
        }
    }

    int input;
    int row,column;
    int now,pre;
    for(int i=0;i<m;i++){
        scanf("%d",&input);
        column = input;
        row=input%2;
        row += input / (int)(pow(2.0,(double)(n-1)))*2;
        column %=  (int)(pow(2.0,(double)(n-1)));
        column = column >> 1;
        if(i != m-1) printf("%d ",sbox[row][column]);
        else printf("%d",sbox[row][column]);
    }


    return 0;
}

