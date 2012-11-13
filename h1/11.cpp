//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

// Да се разработи програма, която изисква от потребителя да въведе целочислено число х, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от cos(z) за всяко z в интервала [0;x) и да се запише като първи елемент в масива. Да се намери сумата от cos(z) за всяко z в интервала [x; 2x) и да се запише като втори елемент в масива. Аналогично да се намерят сумите на cos(z) за всички интервали [Nx; (N+1)x ) и да се запишат като елемент N в масива за всяко N в интервала [0, 10). Масивът да се изведе на стандартния изход.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
  int x,ibroqch,ibroqch2,k,temp_int, n, j,icurrent_element, icurrent_chast;
  float temp , real ,z;
  float array[10];
  
  printf("vuvedi x");
  scanf("%d",&x);

  k=1;
  do{
              if (x>0) k=0;
              else if (x<10) k=0;
              else {
                     printf("vuvedi x\n");
                     scanf("%d",&x);

                   }             
  } while(k==1);
  icurrent_element=1;
  ibroqch=0;
  real=0.0;
  for(ibroqch2=0; ibroqch2<10; ibroqch2++)
                  {
                   while(ibroqch<icurrent_element*x )
                             {
                              temp= cos (ibroqch);
                              real=real+temp;  
                              ibroqch++;                    
                             }                       
                   array[ibroqch2]=real;
                   real=0;
                   icurrent_element++;
                                                  
                  }
   for(n=0; n<10 ; n++)
            {               
            cout<< n << ". " << array[n] << endl;            
            }
    cout<<"Press any key";
    cin >> j;            
            
            
   return 0 ;
}
