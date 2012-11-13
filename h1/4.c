//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].
#include<stdio.h>
 
main()
{
   int first = 0, second = 1, next, c ,x ,y ,k ,z ,n;
 
 
 
   do{
              if (x<y) k=0;
              else {
                     printf("vuvedi x\n");
                     scanf("%d",&x);
                      printf("vuvedi y\n");
                      scanf("%d",&y);
                   }             
  } while(k==1);
  
   for ( c = 0 ; c < x ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
            
   }
   z=c;
   while(next<=y)
       {
       if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      } 
        if(next<=y){     
                         printf("%d\n",next);
                    }     
        }
   
   
  printf("Press Any key and Enter\n");
  scanf("%d",&n);
   return 0;
}
