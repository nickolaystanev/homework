//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. Да се инициализира масив от 10 елемента. Да се намерят първите 10 числа на Фибоначи в [0; +?), които се делят на x без остатък. Намерените стойности да се зададат като стойности на елементите в масива. Елементите на масива да се изведат на стандартния изход.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
  int x,ibroqch,k,z ,icurrent,arr_size;
  long int first , second ,next;
  int array[10];
  
  printf("vuvedi x");
  scanf("%d",&x);

  k=1;
  do{
              if (x>=0) k=0;
              else if (x<10) k=0;
              else {
                     printf("vuvedi x\n");
                     scanf("%d",&x);

                   }             
  } while(k==1);

  ibroqch=0;
  first = 0;
  second = 1;   
  while(ibroqch<10)       
   {
            
                      next = first + second;
                      first = second;
                      second = next;
             
             if (next % x == 0){
                      array[ibroqch]=next;
                      ibroqch++;
                      }
            
   }
      
  for(ibroqch=0;ibroqch<10;ibroqch++){
            cout << ibroqch << ".  "<< array[ibroqch]<<endl ;                                                                   
  }      



 
   printf("Press 1\n");
   scanf("%d",&z);
   return 0 ;
}
