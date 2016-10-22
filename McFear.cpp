#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
float sum = 0.0; 
int main()
{
    
    setlocale(LC_ALL, "rus");
    int ar[15] {};
    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        ar[i] = 1 + rand() % 10;    // 1 ... 7  
    }
 
    cout << endl << "Массив c числами oт 1 до 10: ";
    for (int x = 0; x < 15; x++)
    {
        
        cout << ar[i] << "  ";
    }
 
    for (int x = 1; x <= 15; x++)
    {
        sum += ar[x];
    }
 
    cout << endl;
    cout << "suma  " << sum;
    system("pause");
    return 0;
}