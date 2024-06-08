#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int i,j,input,ans,min,k;

    for(i=0;i<n;i++){

        scanf("%d",&k);      //
        ans=1;

        scanf("%d",&input);
        min = input;
        for(j=1;j<k;j++){
            scanf("%d",&input);
            if(input < min){
                ans *= min;
                min  = input;
            }else{
                ans *= input;
            }
            //printf("min=%d,ans=%d\n",min,ans);
        }
        printf("%d\n",ans*(min+1));
    }
    return 0;
}
