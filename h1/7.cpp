#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
  int x,ibroqch,ibroqch2,k,temp_int, z,icurrent,arr_size;
  float temp , real;
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
  ibroqch=0;
  while(ibroqch < 10)
     {
     real = cos (icurrent);
     temp = real*1000;
     temp_int=(int)temp;
     if ((temp_int % 10) == x)
        {
         array[ibroqch]=real;
         ibroqch++;          
        }  
     icurrent++;                                          
     }
     
   for (ibroqch=0; ibroqch<10 ;ibroqch++){
       printf("%f \n" , array[ibroqch] );
       }  
   
    cout<<"Press any key";
    cin >> z;
   return 0 ;
}
