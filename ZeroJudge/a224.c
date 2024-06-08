#include <stdio.h>
#include <string.h>

//   A   Z   a   z
//   65  90  97  122


int main(){
    char a[1001];


    int flag;
    while(scanf("%s",a) != EOF){
        int left=0,right=strlen(a)-1;
        flag =1;
        while(1){
            while(a[right]<65 || (a[right]>90 && a[right]<97) || a[right]>122){
                if(right == left){
                    break;
                }else{
                    right--;
                }
            }

            while(a[left]<65 || (a[left]>90 && a[left]<97) || a[left]>122){
                if(right == left){
                    break;
                }else{
                    left++;
                }
            }
            if(right != left){
                if(a[left] >90)  a[left]  -= 32;
                if(a[right] >90) a[right] -= 32;
            }
            //printf("a[left]=%c , a[right]=%c,left=%d,right=%d\n",a[left],a[right],left,right);
            if(a[left]  != a[right] ){
                flag=0;
                break;
            }
            if(left == right)  break;
            right--;
            left ++;
        }
    (flag) ? printf("yes !\n") : printf("no...\n") ;

    }




    return 0;
}
