﻿// lab0201.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
    
    setlocale(LC_CTYPE, "ukr");
    int a, b, c, d;
    char buff[4] = { 'a','b','c','d' };
    cout << "Введіть число: ";
    cin >> a;
    cout << "Введіть число: ";
    cin >> b;
    cout << "Введіть число: ";
    cin >> c;
    cout << "Введіть число: ";
    cin >> d;
    if (a != b && a != c)
    {
        cout << endl << a * a;
    }
    if (b != a && b != c)
    {
        cout << endl << b * b;
    }
    if (c != a && c != b)
    {
        cout << endl << c * c;
    }
    if (d != a && d != b)
    {
        cout << endl << d * d;
    }
 
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.