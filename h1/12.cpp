//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото число N в интервала [0; +?) делящо се на х. Да се намери сумата на всички числа в интервала [0; N] и да се запише като първи елемент в масива. Да се намери второто число N' в интервала [0; +?) делящо се на x. Да се намери сумата на всички числа в интервала [0, N'] и да се запише като втори елемент в масива. Аналогично да се запълнят и останалите елементи на масива. Масивът да се изведе на стандартния изход.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
  int x, ibroqch, ibroqch2, icurrent, k, n_int, n, j;
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
  n_int = 0;
  for(ibroqch2=0; ibroqch2<10; ibroqch2++)
                  {
                   while(icurrent<=ibroqch2)
                   {            
                                if(array_N[icurrent] % x == 0)
                                {
                                                   icurrent++;
                                                   n_int++;
                                }
                                else n_int++;
                   }                         
                   while((n_int % x) != 0)
                               {                                  
                               n_int++;                                   
                               }
                   for(ibroqch=0; ibroqch<=n_int ; ibroqch++)
                                  {
                                  array_N[ibroqch2]=array_N[ibroqch2]+ibroqch;
                                  }
                   n_int=0;
                   icurrent=0;                  
                                                  
                  }  
   for(n=0; n<10 ; n++)
            {               
            cout<< n << ". " << array_N[n] << endl;            
            }                                                  
                  
    cout<<"Press any key";
    cin >> j;            
            
            
   return 0 ;
}

