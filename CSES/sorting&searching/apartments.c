#include <stdio.h>

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void max_heapity(int a[],int start,int end){
    int dad = start ;
    int son = dad*2 + 1;
    while (son <= end){
        if(son + 1 <= end && a[son] < a[son + 1])  son ++;
        if(a[dad] > a[son])  return ;
        else{
            swap(&a[dad],&a[son]);
            dad = son ;
            son = dad*2 + 1;
        }
    }
}

void heap_sort(int a[],int len){
    int i;
    for(i=len/2 -1;i>=0;i--){
        max_heapity(a,i,len-1);
    }
    for(i=len-1;i>0;i--){
        swap(&a[i],&a[0]);
        max_heapity(a,0,i-1);
    }
}

int main(){
   
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int p[n];
	int a[m];
	
	int i;
	for(i=0;i<n;i++) scanf("%d",&p[i]);
	for(i=0;i<m;i++) scanf("%d",&a[i]);
	heap_sort(p,n);
	heap_sort(a,m);


   	/*for(int i=0;i<n;i++){
		printf("%d ",p[i]);
   	}
    printf("\n");
	for(int i=0;i<m;i++){
		printf("%d ",a[i]);
	}*/

    int j=0;
    int min=0;
    int ans = 0;
    for(i=0;i<n;i++) for(j=min;j<m;j++) {
        //printf("%d vs %d \n",p[i],a[j]);
        if(a[j] >= p[i]-k && a[j] <= p[i]+k){
            min = j+1;
            ans++;
            break;
        }else if(a[j] > p[i]+k){
            break;
        }else{
            min = j;
        }
    }

    printf("%d",ans);
    
    return 0;
}