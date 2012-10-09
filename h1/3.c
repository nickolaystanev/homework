//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички прости числа завършващи на 3 в интервал [x,y].
#include<stdio.h>
#include<stdlib.h>


main(){

int x,y,c,z,broqch;
printf("Type in x \n");
scanf("%d",&x);
printf("Type in y \n");
scanf("%d",&y);


if (x>=y){
   printf("Type X again , larger then Y");
   scanf("%d\n",&x);
   }
for(broqch=x; broqch<=y; broqch++){
              if(broqch % 10 == 3) {
                   printf("%d\n",broqch);
              }

}
printf("Press 1\n");
scanf("%d",&z);

}
