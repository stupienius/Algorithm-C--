#include <stdio.h>

int main(){
    int n;
    int max = -1,maxtime,erorr = 0;
    scanf("%d",&n);
    
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(b == -1) erorr ++;
        else if(b > max){
            max = b;
            maxtime = a;
        }
    }

    printf("%d %d",(max - n - erorr*2)<0?0:max - n - erorr*2,maxtime);

    return 0;
}