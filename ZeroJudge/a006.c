#include <stdio.h>
#include <math.h>



int main(){


   int a,b,c,d;
   scanf("%d%d%d",&a,&b,&c);




    if(b*b-4*a*c < 0){

        printf("No real root");

    }else if( b*b - 4*a*c == 0){

        printf("Two same roots x=%d", -b/ (2*a) );

    }else{

        d = sqrt(b*b-4*a*c);
        printf("Two different roots x1=%d , x2=%d", (-b+d) / (2*a) , (-b-d) / (2*a) );

    }

    return 0 ;
}
