//Варіант 26
#include <iostream>
#include <cmath> 

using namespace std;
int main()
{
    int a, b, i, res = 0, n;
    cout << " Enter n: ";
    cin >> n; // Введення n
    if (n < 1){
      // якщо n менше 1, то вивід помилки
      cout << "Error: n must be higher than or equal to 1";
   } else {
      // якщо більше або рівне 1, то шукаємо суму членів
      for (int i = 1; i <= n; i++){
         if (i % 2 == 1) {
            // якщо і непарне, то змінним члена присвоюється:
            a = i;
            b = i * i;
      } else {
            // якщо і парне, то змінним члена присвоюється:
            a = i / 2;
            b = i + 7;
      }
      res += (a - b) * (a - b); // обчислення теперешньої суми членів послідовності
      cout << "Now Result: " << res << endl; // виведення теперешньої суми членів послідовності
   
      }
      cout << "Final Result: " << res << endl; // виведення кінцевої суми членів послідовності
   }
return 0;
}
