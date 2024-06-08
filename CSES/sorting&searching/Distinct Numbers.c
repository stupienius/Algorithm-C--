#include <stdio.h>
 
int arr[200000]={0};
 
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void max_heapify(int start,int end){
    int dad=start;
    int son= dad*2 + 1;
    while(son <= end){
        if(arr[son] < arr[son + 1] && son+1 <= end)  son ++;
        if(arr[dad] > arr[son])  return;
        else{
            swap (&arr[son],&arr[dad]);
            dad = son ;
            son = dad*2 + 1;
        }
    }
    
} 
 
void heap_sort(int len){
    for(int i = len/2 - 1;i>=0;i--){
        max_heapify(i,len - 1);
    }
    for(int i=len-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        max_heapify(0,i-1);
    }
}
 
int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    heap_sort(n);
    
    
    int ans=1;
    for(int i=1;i<n;i++){
        ans += (arr[i]!=arr[i-1]);
    }
    
    printf("%d",ans);
    
    return 0;
}
