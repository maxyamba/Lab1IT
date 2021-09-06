// testProg.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
using namespace std;
int main()
{
    int n, i, j, kvo = 0, max = 0;
    cout << "Input number " << endl;
    cin >> n;
    for (i = n; i != 0; kvo++)
    {
        j = i % 10;
        i = i / 10;
        if (max < j)
            max = j;
    }
    cout << "There are " << kvo << " elements, max element: " << max << endl;
    system("pause");
    return 0;
}

