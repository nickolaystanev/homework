//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе целочислено число, x, където 0 < x < 10. Да се инициализират масива от 10 елемента. Стойностите на елементите на масива да са равни на косинус от индекса на елемента.
// Да се изведе масивът, след което да се сортира в низходящ ред и отново да се изведе.
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
  int k , n, ibroqch;  
  double param, result , x; 
  float masiv[10];
  do{
              if (x>0) k=0;
              else if (x<10) k=0;
              else {
                     printf("vuvedi x\n");
                     scanf("%d",&x);

                   }             
  } while(k==1);    
  for(ibroqch=0 ;ibroqch<10 ;ibroqch++){
                 masiv[ibroqch]=cos (ibroqch*PI/180);
                 printf ("The cosine of ibroqch element in degrees is %lf.\n", masiv[ibroqch]);
  }
  printf("Press Any key and Enter\n");
  scanf("%d",&n);  
  return 0;
}
