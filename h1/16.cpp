//Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

// 11 А

// 20

//Николай Василев Станев

//  Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където x e интервала [0; +?). Да се намерят първите 10 нечетни числа делители на x и да се запишат в масив. Масивът да се изведе на екрана и да се намерят простите числа в този масив.
#include<iostream>
#include<stdio.h>
#include <cstdlib>

using namespace std;

int main(){
 int x,chislo;
 bool check=false;
 bool chislo_check =false;
 int array_element[10];
 cout << "vuvedi x" << endl;
 cin >> x; 
 if ((x<1) &&(x>10)){
           cout <<"vuvedi x otnovo" << endl;
           cin >> x;
           }
 chislo =3 ;
 for (int i =0 ;i<10 ; i++){
     while (chislo_check!=true){
           while (check!=true){
                 for (int broqch=2; broqch<chislo ; broqch ++ ){
                     if(chislo % broqch == 0){
                         check=false;
                         }
                      else check = true;
                       }
                  }
           if (chislo % x== 0){
                for(int k=0; k<i; k++){
                        if(array_element[k]==chislo)
                        chislo_check=false;               
                        else{ 
                              array_element[i]=chislo;
                              chislo_check=true;
                              }
                        }
                }
           }
     }
  for(int i=0 ; i<10 ; i++){
          cout << "1."<< array_element[i]<< endl;
          }
       
  system("pause");  
 return 0;   
}
