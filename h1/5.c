/* cos example */
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
