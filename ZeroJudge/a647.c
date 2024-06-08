#include <stdio.h>

int main(){


    int n;
    scanf("%d",&n);


    int in,now;
    double price;
    for(int i=0;i<n;i++){
        scanf("%d%d",&in,&now);
        price=(now-in)/(double)in*100.0;
        if(price>=0)
            price+=+0.00001;
        else
            price-=+0.00001;
        printf("%.2f%% ",price);
        if(price >= 10.0 || price <= -7.0){
            printf("dispose\n");
        }else{
            printf("keep\n");
        }
    }

    return 0;
}
