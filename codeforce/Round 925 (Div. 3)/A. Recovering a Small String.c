#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int i,input;
    for(i=0;i<n;i++){
        scanf("%d",&input);
        if(input<28){
            printf("aa%c\n",input-2+'a'-1);
        }else if(input < 53){
            printf("a%cz\n",input-1-26+'a'-1);
        }else{
            printf("%czz\n",input-26-26+'a'-1);
        }

    }

    return 0;
}
