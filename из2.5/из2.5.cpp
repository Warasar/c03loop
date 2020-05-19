/*
  Напишите программу которая вводит 10 целых чисел и печатает число с максимальным модулем.
  Например для ввода 1 ‐2 5 3 0 ‐3 ‐3 7 ‐8 ‐1 вывести‐8.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, a, max, b;
    max = 0;
    for (i = 1; i <= 10; i++)
    {
        cin >> a;
        if (max < abs(a)) 
        {
            max = abs(a);
            b = a;
        }
    }
    cout << "Otvet = "<< b;
}