#include <stdio.h>
#include <string.h>
int main(){

    int n;
    scanf("%d",&n);

    int i,j,k,x;
    char input[9];
    char ans[9];
    for(i=0;i<n;i++){
        x=0;
        for(j=0;j<8;j++){
            scanf("%s",&input);
            for(k=0;k<8;k++){
                if(input[k] != '.'){
                    ans[x]=input[k];
                    x++;
                }
            }
        }
        ans[x]='\0';
        for(j=0;j<strlen(ans);j++){
            printf("%c",ans[j]);
        }
        printf("\n");
    }



    return 0;
}
