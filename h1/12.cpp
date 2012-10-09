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

