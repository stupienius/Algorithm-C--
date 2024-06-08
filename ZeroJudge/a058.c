#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    int ans1=0,ans2=0,ans3=0;
    for(int i=0;i<n;i++){
        if(a[i]%3 == 0){
            ans1+=1;
        }else if(a[i]%3 == 1){
            ans2+=1;
        }else{
            ans3+=1;
        }
    }
    printf("%d %d %d",ans1,ans2,ans3);

    return 0;
}
