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
