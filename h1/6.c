//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 100 целочислени елемента. Стойностите на елементите да са случайни числа в интервала [0, 100). Елементите на масива да се подредят така, че числата завършващи на x да са в началото.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int x,ibroqch,ibroqch2,k,n,ikrai,icurrent,arr_size ,temp;  
  int random_array[100], sort_array[100];
  k=1;
  printf("vuvedi x\n");
  scanf("%d",&x);
  while(k==1){
              if (x>0) k=0;
              else if (x<10) k=0;
              else {
                     printf("vuvedi x\n");
                     scanf("%d",&x);

                   }             
  } 
  icurrent=0;
  ikrai=99;
  for (ibroqch=0;ibroqch<100;ibroqch++)
     {
     random_array[ibroqch] = rand() % 100 ;                                                
     }
  for (ibroqch=0;ibroqch<100;ibroqch++){
      if ((random_array[ibroqch]% 10)== x ){
            sort_array[icurrent]=random_array[ibroqch];
            icurrent++;
            }
      else{
            sort_array[ikrai]=random_array[ibroqch];
            ikrai--;
           }                                        
      }      

  for(ibroqch=0;ibroqch<ikrai;ibroqch++){
            sort_array[icurrent]= random_array[ibroqch];
            icurrent++;                                    
  }              
  for(ibroqch=0;ibroqch<100;ibroqch++){
            printf("%d  ", sort_array[ibroqch]);                                                                    
  }
  


  printf("Press Any key and Enter\n");
  scanf("%d",&n);
  puts ("Congratulations!");
  return 0;
}
