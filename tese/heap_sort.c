#include <stdio.h>

void swap(int *a,int*b){
    int t =*a;
    *a = *b;
    *b = t;
}

void max_heapity(int a[],int strat,int end){
    int dad = strat;
    int son = dad*2 + 1;
    while(son <= end){
        if(a[son] < a[son + 1] && son + 1 <= end) son ++;
        if(a[dad] > a[son])  return ;
        else{
            swap (&a[dad],&a[son]);
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
    scanf("%d",&n);
    int a[n];
    

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    heap_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}