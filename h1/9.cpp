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
