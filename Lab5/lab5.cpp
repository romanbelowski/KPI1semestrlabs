/*
26. Для кожного натурального числа з інтервалу [a, b] знайти всі дільники, їх кількість та
суму.
*/
#include <iostream>
using namespace std;
int main(){
    int sum, a, b, k ;
    cout << "Input a and b:\n";
    cin >> a >> b; // Ввід a та b.
    if (a < 1 or b < 1 or b < a){
      // якщо a або b менше 1 або b < a, то вивід помилки
      cout << "Error: a and b must be higher than or equal to 1, b must be higher than a "; 
   } else {
    for (int i = a; i <=b; i++) // Повторення циклу для кожного числа з інтервалу.
    {
        sum=0;
        k=0;
        cout<<"\nDivisor(s) of number "<<i<<"\n";
      for (int f = 1; f <= i; f++)
      {
          if (i%f == 0) // Знаходження дільників числа з інтервалу, їх кількості та суми.
          {
            cout<<f<<" ";
              k++; sum+=f;
          }
      }
    cout <<"\nAmount of divisors: " << k;
    cout<<"\nSum of divisors: "<< sum;
      }
   }
     return 0;
} 
    
