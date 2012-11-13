//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

// Програма в която трябва да се въвде x и y x<y да се намери сумата на всички нечетни числа в интервала[x,y].




//
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
