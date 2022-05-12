#include <iostream>
using namespace std;

int arr[2][2];
int arr2[2][2];

int main()
{
    cout << "Masukkan Nilai Matriks A" << endl;
    cout << "========================" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[" << i + 1 << "]"
                 << " "
                 << "[" << j + 1 << "]"
                 << " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Masukkan Nilai Matriks B" << endl;
    cout << "========================" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[" << i + 1 << "]"
                 << " "
                 << "[" << j + 1 << "]"
                 << " = ";
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << "Matriks A" << endl;
    cout << "========================" << endl;
    for (int x = 0; x < 2; x++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << arr[x][i] << " ";
        }
        cout << endl;
    }
    cout << "Matriks B" << endl;
    cout << "========================" << endl;
    for (int x = 0; x < 2; x++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << arr2[x][i] << " ";
        }
        cout << endl;
    }
    cout << "Hasil Penjumlahan Matriks" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] += arr2[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}