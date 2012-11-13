//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//        Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери числото пи чрез следното развитие в ред:

//4-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 4/N<x. Получената стойност за пи да се изведе на екрана.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int count,j;
    float chislo;
    float pi = 0;
          cout << "vuvedete chislo:" << endl;
          cin >> chislo; 
    
                          for( count = 1; 4.0/count >= chislo; count++){
         
                           if( count % 2 == 0){
                               pi = pi - (4.0 / (2 * count - 1));
                               }
                        else{
                        pi = pi + (4.0 / (2 * count - 1));
                        }
              }
              cout << pi << endl;
              cout<<"Press any key";
              cin >> j; 

              return 0;
}
