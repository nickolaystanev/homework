//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//        Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото просто число в интервала [0; +?) завършващо на x и да се запише като първи елемент в масива. Да се намери второто просто число в интервала [0;  +?) завършващо на x и да се запише като втори елемент в масива. Аналогично да се намерят първите N прости числа в интервала [0;  +?) и да се запишат като елемент N в масива. Масивът да се изведе на стандартния изход.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
  int x, ibroqch, ibroqch2, icurrent, proverka, temp_sum, k, n_broi, n, j;
  int array_N[10];
  bool result = false ;
  
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
  icurrent=1;
  n_broi = 1;
  ibroqch2=0;
  while(ibroqch2<10)
                  {
                  
                  for(proverka = 2 ; proverka <icurrent ; proverka++)
                              {
                              if(icurrent % proverka == 0)
                                          {
                                          result = true;
                                          }                                         
                              }
                  if(result == false)
                            {
                            if((icurrent % 10) == x)
                                         {
                                         array_N[ibroqch2]=icurrent;
                                         ibroqch2++;
                                         }
                            }
                  icurrent++;          
                                                  
                  }  
   for(n=0; n<10 ; n++)
            {               
            cout<< n << ". " << array_N[n] << endl;            
            }                                                  
                  
    cout<<"Press any key";
    cin >> j;            
            
            
   return 0 ;
}
