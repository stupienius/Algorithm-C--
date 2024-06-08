#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d",&n);


    int a,b,sum;
    for(int i=0;i<n;i++){
        sum=0;
        scanf("%d%d",&a,&b);
        for(int j=ceil(sqrt(a));j<=sqrt(b);j++){
            sum += j*j;
        }
        printf("Case %d: %d\n",i+1,sum);
    }

    return 0;
}
