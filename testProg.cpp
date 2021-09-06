// testProg.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
using namespace std;
int main()
{
    int n, f, j, kvo = 0, max = 0;
    cout << "Input number " << endl;
    cin >> n;
    for (f = n; f != 0; kvo++)
    {
        j = f % 10;
        f = f / 10;
        if (max < j)
            max = j;
    }
    cout << "There are " << kvo << " elements, max element: " << max << endl;
    system("pause");
    return 0;
}

