//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от всички числа в интервала [0; 1000) делящи се на x и да се запише като първа стойност в масива. Да се намери сумата от всички числа в интервала [0;1000) деляща се на 2x и да се запише като втора стойност в масива. Аналогично да се намери сумата на всички числа делящи се на Nx за N в интервала [1;10] и да се запишат като елемент N-1 в масива. Масивът да се изведе на стандартния изход.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
  int x, ibroqch, ibroqch2, icurrent, temp_sum, k, n_broi, n, j;
  int array_N[10];
  
  cout << "vuvedi x";
  cin >> x;

  k=1;
  while(k==1){
              if (x>0) k=0;
              else if (x>10)
                   {
                     k=1;
                     cout << "vuvedi x otnovo";
                     cin >> x;

                   }             
  } 
  icurrent=0;
  n_broi = 1;
  for(ibroqch2=0; ibroqch2<10; ibroqch2++)
                  {
                  for(ibroqch=0; ibroqch<1000; ibroqch++)
                                 {
                                 if (ibroqch % (n_broi*x) == 0)
                                             {
                                             temp_sum += ibroqch;
                                             }
                                 } 
                   array_N[ibroqch2]=temp_sum;
                   n_broi++; 
                   temp_sum = 0;   
                                                  
                  }  
   for(n=0; n<10 ; n++)
            {               
            cout<< n << ". " << array_N[n] << endl;            
            }                                                  
                  
    cout<<"Press any key";
    cin >> j;            
            
            
   return 0 ;
}

