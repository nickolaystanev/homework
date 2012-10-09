#include<stdio.h>
#include<stdlib.h>


main(){

int x,y,z,broqch,suma;
printf("Type in x \n");
scanf("%d",&x);
printf("Type in y \n");
scanf("%d",&y);

suma=0;
if (x>=y){
   printf("Type X again , larger then Y");
   scanf("%d\n",&x);
   }
for(broqch=x; broqch<=y; broqch++){
              if(broqch % 17 == 0) {
                   suma += broqch;
              }

}
printf("%d\n",suma);
printf("Press 1\n");
scanf("%d",&z);

}
