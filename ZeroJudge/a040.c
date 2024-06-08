#include <stdio.h>
#include <math.h>

int main(){

    int m,n;
    scanf("%d%d",&m,&n);


    int k,sum,q,flag=0;
    for(int i=m;i<n+1;i++){

        q=i;
        k=0;
        sum =0;
        int ha[7];
        while(q != 0){
            ha[k]=q%10;
            q=q/10;
            k++;
        }
        for(int j=0;j<k;j++){
            sum=sum+pow(ha[j],k);
        }

        if(sum == i){
            flag=1;
            printf("%d ",i);
        }

    }

    if(!flag){
        printf("none\n");
    }else{
        printf("\n");
    }

    return 0;
}
