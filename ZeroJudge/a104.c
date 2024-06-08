#include <stdio.h>

void quick(int a[],int left,int right){

    int l=left;
    int r=right;

    int k = a[left];
    left ++;

    int t;
    while(1){
        while(a[right] >= k && left != right){
            right--;
        }
        while(a[left] < k && left != right){
            left++;
        }
        if(left == right)
            break;

        t=a[left];
        a[left]=a[right];
        a[right]=t;
    }
    if(a[left] < k){
        a[l]=a[left];
        a[left]=k;
    }
    //************************
    for(int i=l;i<r+1;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    printf("l=%d,k=%d,left=%d,r=%d\n**************\n",l,k,left,r);
    //*********************/
    if(left-1-l > 0){
        quick(a,l,left-1);
    }
    if(r-(left+1) > 0){
        quick(a,left+1,r);
    }
}

int main(){
    int n;

    while(scanf("%d",&n) != EOF){
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        quick(a,0,n-1);

        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");

    }
}
