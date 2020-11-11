//Варіант 26
#include <iostream>
#include <cmath> 
#include <stdlib.h>
#include <algorithm> 

using std::cout;
using std::cin;
using std::endl;
using std::min;

int main()
{
    setlocale(LC_ALL, "Russian");
    double epsilon, a_variable, x_start, x_current, x_next, temp;
 
    cout << "Input the a variable: "; // Введення а
    cin  >> a_variable;
    cout << "Input the epsilon: "; // Введення точності
    cin  >> epsilon;

// Розраховування X0

    if (a_variable <= 1) {
  x_start = min(2 * a_variable, 0.95);
} else if ((a_variable < 25)) {
  x_start = a_variable / 5;
} else {
  x_start = a_variable / 25;
}
x_current = x_start; // Присвоєння Xn == X0
x_next = 0.8 * x_current + a_variable / (5 * (pow(x_current, 4))); // Розрахунок Xn+1

temp = 1; // Явне представлення змінної temp
// Цикл розрахунку по формулі послідовного наближення
while (temp > epsilon){
x_next = 0.8 * x_current + a_variable / (5 * (pow(x_current, 4)));
temp = abs(x_next - x_current);
x_current = x_next; 
cout << "X is " << x_current << endl; // Виведення значення X
}


return 0;
}
