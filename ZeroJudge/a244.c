#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int a;
    long  b,c;
    for(int i=0;i<n;i++){
        scanf("%d%ld%ld",&a,&b,&c);
        switch(a){
            case 1:
                printf("%ld\n",c+b);
                break;
            case 2:
                printf("%ld\n",b-c);
                break;
            case 3:
                printf("%ld\n",b*c);
                break;
            default :
                printf("%ld\n",b/c);
                break;
        }
    }
    return 0;
}
