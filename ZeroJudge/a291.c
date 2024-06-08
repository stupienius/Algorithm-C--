#include <stdio.h>

int main(){

    int correct[4];

    int n,test,i,j,k,a,b;
    while(scanf("%d",&correct[0]) != EOF){
        for(i=1;i<4;i++){
            scanf("%d",&correct[i]);
        }
        scanf("%d",&n);
        for(i=0;i<n;i++){
            char ab[4]={0};
            for(j=0;j<4;j++){
                scanf("%d",&test);
                if( test == correct[j]){
                    if( ab[j]= 'B'){
                        ab[j] = 'A';
                        goto x;
                    }
                    ab[j] ='A';
                }else{
                    x:for(k=0;k<4;k++){
                        if( test == correct[k]){
                            if(ab[k] != 'A'){
                                ab[k] ='B';
                                break;
                            }
                        }
                    }
                }

            }
            a=0; b=0;
            for(j=0;j<4;j++){
                if(ab[j] == 'A'){
                    a++;
                }else if(ab[j] == 'B'){
                    b++;
                }
            }
            printf("%dA%dB\n",a,b);
        }

    }
    return 0;
}
