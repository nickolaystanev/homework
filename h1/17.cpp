//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

// Да се разработи програма, която изисква от потребителя да въведе число x, където x e интервала (0;1). Да се намери сумата от сбора на реципрочните стойности за всеки две twin primes. Развитието да продължи докато отношението не стане по-малко то x.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main (){
    int prime1 ,prime2 ,proverka;
    float result1 ,result2 ,x  ,sum ,n;
    bool check;
    
    cout << "vuvedete chislo:" << endl;
    cin >> x;
    result1=3;    
    while(sum<x){
    
                  for ( proverka = 2 ; proverka <= prime1 - 1 ; proverka++ )
                  {
                  prime2=prime1 +2;
                         if ( prime1%proverka == 0 ) { 
                         check = false ;  
                         break ;  
                         }
                         else check = true ;
                  }
                  if (check == true){
                           for ( proverka = 2 ; proverka <= prime1 - 1 ; proverka++ ){
                               if ( prime2%proverka == 0 ) {                                
                                    break ; 
                                    }  
                               else {
                                    result1 = 1/ prime1;
                                    result2 = 1/ prime2;
                                    sum= result1 + result2;
                                    } 
                           }       
                  }   
                                    
    }
    cout << sum << endl;
    cout << "Press any key";
    cin >> n;
    
    return 0;   
}
