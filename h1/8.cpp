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
