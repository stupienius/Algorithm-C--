#include <stdio.h>
#define MAX 1000001

int main(){

    int n;
    scanf("%d",&n);


    int minstep[n+1];


    int i,j;
    for(i=0;i<n+1;i++)
        minstep[i]=MAX;
    minstep[0]=0;

    int k;
    for(i=1;i<n+1;i++){
        for(k=i;k!=0;k /= 10){
            if(i >= k % 10 && minstep[i-(k%10)]+1 < minstep[i]){
                minstep[i]=minstep[i-(k%10)]+1;
            }
        }
    }


    printf("%d",minstep[n]);


    return 0;
}


