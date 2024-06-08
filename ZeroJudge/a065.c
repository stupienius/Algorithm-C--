#include <stdio.h>
#include <stdlib.h>

int main(){

    char a[7];

    scanf("%s",&a);

    for(int i=1;i<7;i++){
        printf("%d",abs(a[i]-a[i-1]));
    }
    printf("\n");

    return 0;
}
