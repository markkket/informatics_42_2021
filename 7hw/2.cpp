﻿#include <iostream>//стандартная библиотека основных операций
using namespace std;//облегчает ввод данных

void draw(int hight, char symbol, int index1, int index2, char space) //функция рисует указанные переменные следующим образом:
{

    while (index1 <= hight) //функция выводит символы до тех пор пока index1 не равняется высоте треугольника(включительно)
    {
        cout << string(index1, symbol) << endl; // вывод простого равнобедренного треугольника(index1 соответствует номеру строки и кол-ву символов в ней)
        index1++;//оператор ++ увеличивает index1 на 1
    }

    cout << endl;

    while (index2 > 0) //функция выводит символы до тех пор пока index2 не равняется нулю
    {
        cout << string(index2, symbol) << endl;// вывод перевернутого равнобедренного треугольника(index2 соответствует постепенно убывающей ширине треугольника и кол-ву символов в соответствующей строке)
        index2--;//оператор ++ уменьшает index2 на 1
    }

    for (int i = 0; i <= hight; i++) //вводится переменная i, обозначающая кол-во символов (не пробелов) и номер строки, с ходом цикла увеличивается на 1
    {
        cout << string(hight - i, space);// вывод пробелов перед треугольником
        cout << string(i, symbol) << endl;// вывод отзеркального равнобедренного треугольника
    }

    cout << endl;

    for (int i = hight; i > 0; i--) //вводится переменная i, обозначающая кол-во символов (не пробелов), с ходом цикла уменьшается на 1
    {
        cout << string(hight - i, space);// вывод пробелов перед треугольником
        cout << string(i, symbol) << endl;// вывод отзеркаленного равнобедренного тругольника
    }

}

int main() 
{
    setlocale(LC_ALL, "Russian"); //подключаем русский язык

    // hight - выстоа треугольника, symbol - символ, из которого будет состоять треугольник, space - кол-во пробелов перед символами

    int hight, index1, index2;
    char symbol;
    char space = ' ';
    //вводим данные
    cout << "введите высоту треугольника:";
    cin >> hight;
    cout << "введите символ, из которого будет состоять треугольник ";
    cin >> symbol;

    index1 = 0;
    index2 = hight;//index2 равняется высоте прямоугольного треуголника и является длиной его 2ого катета тк треугольник равнобедренный

    draw(hight, symbol, index1, index2, space);
}