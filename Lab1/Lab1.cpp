//Задано сторону квадрата. Знайти його діагональ, периметр та площу.
#include <iostream>
#include <math.h> 

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "Russian");
    // Об'ява змінних
    float Size;
    float Perimeters;
    float Diagonal;
    float Area;
    // Введення сторони
    cout << "Input the side of square: ";
    cin  >> Size;
    // Обчислення виводу
    Perimeters = Size * 4; // Периметр
    Diagonal = Size * sqrt(2); // Діагональ
    Area = Size * Size; // Площа
    // Вивід 
    cout << "Perimeters:\t" << Perimeters << endl;
    cout << "Diagonal:\t" << Diagonal << endl;
    cout << "Area:\t\t" << Area << endl;
    return 0;
}
