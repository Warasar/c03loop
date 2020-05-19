/*
Выведите по одному в строке все трех значные простые числа
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    for (i = 100; i <= 999; i++) 
    {
        k = 0;
        for (j = 1; j <= i; j++) 
        {
            n = i%j;
            if (n == 0)
                k++;
        }
        if (k == 2)
            cout << i << " ";
    }
}
