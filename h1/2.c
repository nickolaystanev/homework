//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери и изведе сумата на числата делящи се на 17 в интервал [x, y].
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
