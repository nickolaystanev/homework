#include<stdio.h>
#include<stdlib.h>


main(){

int x,y,c,z,broqch,sumaEven,sumaOdd;
printf("Type in x \n");
scanf("%d",&x);
printf("Type in y \n");
scanf("%d",&y);

sumaOdd=0;
if (x>=y){
   printf("Type X again , larger then Y");
   scanf("%d\n",&x);
   }
for(broqch=x; broqch<=y; broqch++){
              if(broqch % 2 == 0) {
                   sumaEven += broqch;
              }else {
                    sumaOdd += broqch;
                    }

}
printf("%d\n",sumaOdd);
printf("Press 1\n");
scanf("%d",&z);

}
