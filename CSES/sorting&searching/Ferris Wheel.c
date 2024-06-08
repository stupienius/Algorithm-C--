#include <stdio.h>

void swap(int* a,int *b){
    int t = *a;
    *a = *b ;
    *b = t;
}

void max_heapity(int a[],int start,int end){
    int dad = start;
    int son = dad*2 + 1 ;
    while (son <= end){
        if(son+1 <= end && a[son] < a[son+1]) son ++;
        if(a[dad]>a[son]) return;
        else {
            swap(&a[dad],&a[son]);
            dad = son ;
            son = dad*2 + 1;
        }
    }

}

void heap_sort(int a[],int len){
    int i;
    for(i=len/2-1;i>=0;i--){
        max_heapity(a,i,len-1);
    }
    for(i=len-1;i>0;i--){
        swap(&a[i],&a[0]);
        max_heapity(a,0,i-1);
    }
}

int main(){
    int n;
    int x;
    scanf("%d %d",&n,&x);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    heap_sort(a,n);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}