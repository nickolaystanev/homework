#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
      int x,n,z,a=0,b=1,count=0;
      int array_[10];
      
      cout <<"Vuvedete broi izvejdaniq :\n";
      cin >> n;
      cout << "Vuvedete X :\n";
      cin >> x;
      if (x>10)
      {
         cout << "vuvedi x otnovo 0<x<10 !!!\n" ;
         cin >>x;   
      }
      do{
         z=a+b;
         a=b;
         b=z;
         if (z%10 == x)
         {
            array_[count] = z;
            count=count+1;
         } 
       } while(count<=1000);
       for(count=0; count<n; count++)
                cout << array_[count] << endl;
      
      system("PAUSE");    
      return 0;
}
